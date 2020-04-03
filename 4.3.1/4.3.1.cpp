// 4.3.1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv.hpp>
#include<iostream>

using namespace cv;
int main()
{ 
	cv::Mat out;
    cv:Mat src = imread("D:\\lena.jpg", 0);
	if (src.empty()) return -1;
	float angle = -10.0, scale = 1;
	cv::Point2f center(src.cols*0.5, src.rows*0.5);
	const cv::Mat affine_matrix = cv::getRotationMatrix2D(center, angle, scale);
	cv::warpAffine(src, out, affine_matrix, src.size());
	imshow("src", src);
	imshow("out", out);
	waitKey(0);
}

