
#include "AIModel.h"
#include "ImageManager.h"
#include "ResultManager.h"

class ParasiteDetector {
public:
    ParasiteDetector(ImageManager* imageManager, YOLOModel* aiModel);

    std::vector<Parasite> runAnalysis();

private:
    ImageManager* imageManager;
    YOLOModel* aiModel;
    ResultManager* resultManager;
};


struct Parasite {
    cv::Rect boundingBox;
    double confidenceScore;
    std::string type; // Optional: Add parasite type if classification is part of your model
};
