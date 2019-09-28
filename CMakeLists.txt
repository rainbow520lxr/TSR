# 函数式编程
cmake_minimum_required(VERSION 3.15)
project(TSR)

set(CMAKE_CXX_STANDARD 14)

# Where to find CMake modules and OpenCV

# 设置了opencv的包目录， 里面包含了.a/.dll文件  或者.so linux下
set(OpenCV_DIR "D:\\C++Library\\opencv\\install")

# 设置模块路径有两个，一个是cmake本地模块路径和源文件目录下的camke文件夹中
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

# 搜索opencv依赖包，容易出问题
find_package(OpenCV REQUIRED)
#获取OPENCV_FOUND OPENCV_INCLUDE_DIR OPENCV_LIBRARIES

# 将opencv加入二进制目录树中，便于搜索模块
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(TSR main.cpp)

include_directories(demo)

# add libs you need

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

# linking

target_link_libraries(TSR ${OpenCV_LIBS})