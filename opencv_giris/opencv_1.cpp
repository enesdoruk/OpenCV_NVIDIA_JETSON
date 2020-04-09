#include <opencv2/opencv.hpp>
#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main(){

cv::Mat image = cv::imread("/home/enes/Desktop/opencv_giris/araba.jpeg");

if (image.data){

cv::namedWindow("Araba");
cv::imshow("Araba",image);
cv::waitKey(100000);

}}
