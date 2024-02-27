cmake_minimum_required(VERSION 3.5)
project(ParasitePic)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(OpenCV REQUIRED)
find_package(Qt5Widgets REQUIRED)

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS} ${Qt5Widgets_INCLUDE_DIRS})
include_directories(/usr/include/opencv2)  # Add this line

# Add executable
add_executable(ParasitePic
    ImageManager.cpp
    MainWindow.cpp
    ParasiteDetector.cpp
    ResultManager.cpp
    YOLOModel.cpp)

# Add this line to enable position independent code
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")


# Link libraries
target_link_libraries(ParasitePic ${OpenCV_LIBS})

