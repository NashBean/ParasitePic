// Define YOLO model class
class YOLOModel {
public:
    YOLOModel(const std::string& cfgPath, const std::string& weightsPath, const std::string& classesPath);

    // Method to perform object detection on an input image
    std::vector<cv::Rect> detectObjects(const cv::Mat& image);

private:
    // YOLO model variables
    std::string cfgPath="//path/cfg/";
    std::string weightsPath="//path/weight/";
    std::string classesPath="//path/classes/";
    cv::dnn::Net net;
    std::vector<std::string> classes;

    // Private methods for initialization and post-processing
    void loadClasses();
};
