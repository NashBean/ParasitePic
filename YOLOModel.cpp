#include "YOLOModel.h"

YOLOModel::YOLOModel(const std::string& cfgPath, const std::string& weightsPath, const std::string& classesPath)
    : cfgPath(cfgPath), weightsPath(weightsPath), classesPath(classesPath) {
    net = cv::dnn::readNetFromDarknet(cfgPath, weightsPath);
    net.setPreferableBackend(cv::dnn::DNN_BACKEND_OPENCV);
    net.setPreferableTarget(cv::dnn::DNN_TARGET_CPU);
    loadClasses();
    //net = cv::dnn::Net::Net();   
}

void YOLOModel::loadClasses() {
    std::ifstream file(classesPath);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line))
            classes.push_back(line);
        file.close();
    }
}

std::vector<Parasite> YOLOModel::detectParasites(const cv::Mat& image) {
    cv::Mat blob = cv::dnn::blobFromImage(image, 1 / 255.0, cv::Size(416, 416), cv::Scalar(0, 0, 0), true, false);
    net.setInput(blob);

    std::vector<cv::Mat> outputs;
    net.forward(outputs, net.getUnconnectedOutLayersNames());

    std::vector<Parasite> parasites;
    for (const auto& output : outputs) {
        for (int i = 0; i < output.rows; ++i) {
            cv::Mat detection = output.row(i);
            float confidence = detection.at<float>(4);
            if (confidence > 0.5) {
                int centerX = detection.at<float>(0) * image.cols;
                int centerY = detection.at<float>(1) * image.rows;
                int width = detection.at<float>(2) * image.cols;
                int height = detection.at<float>(3) * image.rows;

                int x = centerX - width / 2;
                int y = centerY - height / 2;

                Parasite parasite;
                parasite.boundingBox = cv::Rect(x, y, width, height);
                parasite.confidenceScore = confidence;
                parasites.push_back(parasite);
            }
        }
    }
    return parasites;
}
