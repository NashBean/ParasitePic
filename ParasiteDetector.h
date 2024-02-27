#ifndef PARASITEDETECTOR_H
#define PARASITEDETECTOR_H

#include "ImageManager.h"
#include "YOLOModel.h" // Include YOLOModel header
#include "ResultManager.h"
#include <opencv2/opencv.hpp>
struct Parasite;
class ImageManager;
class ResultManager;
class ParasiteDetector 
{
public:
    ParasiteDetector(ImageManager* iM, ResultManager* rM); // Modify constructor
    ~ParasiteDetector();
    std::vector<Parasite> runAnalysis();

private:
    YOLOModel* yoloModel; // Change AIModel to YOLOModel
    ImageManager* imageManager;
    ResultManager* resultManager;
};

#endif // PARASITEDETECTOR_H
