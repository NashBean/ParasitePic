#include "ParasiteDetector.h"
//---------------------------------------------------------------------
//
//   ParasiteDetector
//
//---------------------------------------------------------------------

// Constructor
//ParasiteDetector::ParasiteDetector() {
    // Initialize your machine learning model here
    // Example: Load pre-trained model
//    aiModel = new YOLOModel("yolov3.cfg", "yolov3.weights", "coco.names"); // Initialize YOLOModel
//    }

 ParasiteDetector::ParasiteDetector(ImageManager* iM, ResultManager* rM) : imageManager(iM), resultManager(rM)
 {
    // Constructor implementation
    imageManager = iM;
    resultManager = rM;
    YOLOModel = new YOLOModel("yolov3.cfg", "yolov3.weights", "coco.names"); // Initialize YOLOModel

}

//ParasiteDetector::ParasiteDetector(ImageManager* imageManager, YOLOModel* yoloModel, ResultManager* resultManager)
//    : imageManager(imageManager), yoloModel(yoloModel), resultManager(resultManager) {}

// Destructor
ParasiteDetector::~ParasiteDetector() 
{
    imageManager = NULL;
    resultManager = nil;
    // Release any resources used by the model
    delete YOLOModel;
}

// Function to detect parasites in an image
std::vector<Parasite> ParasiteDetector::runAnalysis() 
    {
    // Get current image from ImageManager
    cv::Mat image = imageManager->getCurrentImage();
    if (image.empty()) 
        {
        qDebug() << "Error: Image not loaded!";
        return {};
        }
    std::vector<Parasite> parasites;

//*/
    // Detect parasites using YOLOModel
    parasites = yoloModel->detectParasites(image);
/*/
    // Dummy implementation for demonstration
    // Here, we just assume there is a single parasite detected in the center of the image
    Parasite parasite;
    parasite.type = "Dummy Parasite";
    parasite.confidenceScore = 0.9;
    parasite.boundingBox = cv::Rect(100, 100, 50, 50); // Example bounding box
    parasites.push_back(parasite);


//*/
    // Store or display results as needed
    resultManager->storeResults(parasites);

    return detectedParasites;
}
