#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

#include <vector>
#include <opencv2/opencv.hpp>

class ImageManager
{
public:
    ImageManager();
    ~ImageManager();

    void loadImages(const std::string& path);
    cv::Mat getCurrentImage();
    void preprocessImages();

private:
    size_t index=0;
    std::vector<cv::Mat> images;
};

#endif // IMAGEMANAGER_H
