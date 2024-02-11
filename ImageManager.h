class ImageManager {
public:
    ImageManager();
    ~ImageManager();

    std::vector<cv::Mat> loadImages(const std::string& path);
    void preprocessImages();

private:
    std::vector<cv::Mat> images;
};