#include "ImageManager.h"

ImageManager::ImageManager() {
    // Constructor implementation
}

ImageManager::~ImageManager() {
    // Destructor implementation
}

void ImageManager::loadImages(const std::string& path) 
{
    //std::vector<cv::Mat> images;
    cv::String directory = path + "/*.jpg"; // Change the file extension if necessary
    std::vector<cv::String> filenames;
    cv::glob(directory, filenames);

    for (const auto& filename : filenames) {
        cv::Mat image = cv::imread(filename);
        if (!image.empty())
            {images.push_back(image);}
        else
            {std::cerr << "Failed to load image: " << filename << std::endl;}
    }
}

cv::Mat ImageManager::getCurrentImage()
{
    if (index < images.size())
        {return images[index];}
    else
        {
        // Handle the case where the index is out of bounds
        std::cerr << "Index out of bounds: " << index << std::endl;
        return cv::Mat(); // Return an empty Mat object
        }

}

void ImageManager::preprocessImages()
{

}
