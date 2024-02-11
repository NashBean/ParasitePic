#include "ParasiteDetector.h"
//---------------------------------------------------------------------
//
//   ParasiteDetector
//
//---------------------------------------------------------------------

// Constructor
ParasiteDetector::ParasiteDetector() {
    // Initialize your machine learning model here
    // Example: Load pre-trained model
    // model = load_model("model_file_path");
    }

ParasiteDetector::ParasiteDetector(ImageManager* imageManager, YOLOModel* yoloModel, ResultManager* resultManager)
    : imageManager(imageManager), yoloModel(yoloModel), resultManager(resultManager) {

    }



// Destructor
ParasiteDetector::~ParasiteDetector() {
    // Release any resources used by the model
}

// Function to detect parasites in an image
std::vector<Parasite> ParasiteDetector::runAnalysis() {
    // Get current image from ImageManager
    cv::Mat image = imageManager->getCurrentImage();
    if (image.empty()) {
        qDebug() << "Error: Image not loaded!";
        return {};
    }

    // Detect parasites using YOLOModel
    std::vector<Parasite> detectedParasites = yoloModel->detectParasites(image);

    // Store or display results as needed
    resultManager->storeResults(detectedParasites);

    return detectedParasites;
}