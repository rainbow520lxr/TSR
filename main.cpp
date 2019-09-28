#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;

int main() {
    std::string path = "C:\\Users\\lxr\\Desktop\\TSR\\demo\\mandatory.png";
    Mat img = imread(path);
    std::cout << "Hello, World!" << path << img.size << std::endl;
    imshow("demo", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}