
#ifndef YOLOMODEL_H
#define YOLOMODEL_H

#include <opencv2/opencv.hpp>

struct Parasite {
    cv::Rect boundingBox;
    double confidenceScore;
};

class YOLOModel {
public:
    YOLOModel(const std::string& cfgPath, const std::string& weightsPath, const std::string& classesPath);
    std::vector<Parasite> detectParasites(const cv::Mat& image);

private:
    std::string cfgPath;
    std::string weightsPath;
    std::string classesPath;
    cv::dnn::Net net;
    std::vector<std::string> classes;

    void loadClasses();
};

#endif // YOLOMODEL_H
