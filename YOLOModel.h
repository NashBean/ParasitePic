
#ifndef YOLOMODEL_H
#define YOLOMODEL_H

#include <opencv2/opencv.hpp>
#include <fstream>
#include <vector>

struct Parasite 
{
    cv::Rect boundingBox;
    double confidenceScore;
    std::string kingdom; 
    std::string subkingdom; 
    std::string phylum; 
    std::string class_; 
    std::string subclass; 
    std::string order; 
    std::string suborder; 
    std::string superfamily; 
    std::string family; 
    std::string subfamily; 
    std::string genus; 
    std::string species; 
    std::string subspecies; 
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
