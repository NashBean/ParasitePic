#include "AIModel.h"

//-------------------------------------------------------
//
//  YOLO model configuration and weights
//
//-------------------------------------------------------

// Constructor: Load YOLO model configuration and weights
YOLOModel::YOLOModel(const std::string& cfgPath, const std::string& weightsPath, const std::string& classesPath)
    : cfgPath(cfgPath), weightsPath(weightsPath), classesPath(classesPath) {
    net = cv::dnn::readNetFromDarknet(cfgPath, weightsPath);
    net.setPreferableBackend(cv::dnn::DNN_BACKEND_OPENCV);
    net.setPreferableTarget(cv::dnn::DNN_TARGET_CPU);
    loadClasses();
}

// Load class names from file
void YOLOModel::loadClasses() {
    std::ifstream file(classesPath);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line))
            classes.push_back(line);
        file.close();
    }
}

// Method to perform object detection on an input image
std::vector<cv::Rect> YOLOModel::detectObjects(const cv::Mat& image) {
    // Create blob from input image and set input to the network
    cv::Mat blob = cv::dnn::blobFromImage(image, 1 / 255.0, cv::Size(416, 416), cv::Scalar(0, 0, 0), true, false);
    net.setInput(blob);

    // Get output layer names
    std::vector<cv::String> layerNames = net.getUnconnectedOutLayersNames();

    // Forward pass through network
    std::vector<cv::Mat> outputs;
    net.forward(outputs, layerNames);

    // Process output detections
    std::vector<cv::Rect> detections;
    for (const auto& output : outputs) {
        for (int i = 0; i < output.rows; ++i) {
            cv::Mat detection = output.row(i);
            float confidence = detection.at<float>(4);
            if (confidence > 0.5) {  // Adjust confidence threshold as needed
                // Extract bounding box coordinates
                int centerX = detection.at<float>(0) * image.cols;
                int centerY = detection.at<float>(1) * image.rows;
                int width = detection.at<float>(2) * image.cols;
                int height = detection.at<float>(3) * image.rows;
                // Convert coordinates to top-left corner and width/height
                int x = centerX - width / 2;
                int y = centerY - height / 2;
                // Add bounding box to detections
                detections.emplace_back(x, y, width, height);
            }
        }
    }
    return detections;
}
