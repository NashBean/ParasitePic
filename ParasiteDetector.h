#ifndef PARASITEDETECTOR_H
#define PARASITEDETECTOR_H

#include "ImageManager.h"
#include "YOLOModel.h" // Include YOLOModel header
#include "ResultManager.h"

class ParasiteDetector {
public:
    ParasiteDetector(ImageManager* imageManager, YOLOModel* yoloModel, ResultManager* resultManager); // Modify constructor
    std::vector<Parasite> runAnalysis();

private:
    ImageManager* imageManager;
    YOLOModel* yoloModel; // Change AIModel to YOLOModel
    ResultManager* resultManager;
};

#endif // PARASITEDETECTOR_H
