#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

Mat convertToYCbCr(cv::Mat image) {
    int i, j;
	Mat R,G,B,Y,Cb,Cr;
    for (i = 0; i <= image.cols; i++) {
        for (j = 0; j <= image.rows; j++) {

            R = image.at<cv::Vec3d>(j, i)[2];
            G = image.at<cv::Vec3d>(j, i)[1];
            B = image.at<cv::Vec3d>(j, i)[0];

			Y =  +0.299 * R + 0.587 * G + 0.114 * B + 16;
            Cb =  +128 + (-0.169 * R - 0.331 * G + 0.5 * B);
            Cr = +128 + (0.5 * R - 0.419 * G - 0.081 * B);

        }
    }
}

int main()
{
	Mat BGR_img = imread("C:\\Users\\wnjsw\\바탕 화면\\color_space.jpg", 1);
	CV_Assert(BGR_img.data);

	Mat YCC_img, YUV_img, Lab_img, Gray_img;
	cvtColor(BGR_img, Gray_img, CV_BGR2GRAY);
	cvtColor(BGR_img, YCC_img, CV_BGR2YCrCb);
	

	Mat YCC_arr[3], YUV_arr[3], Lab_arr[3];
	split(YCC_img, YCC_arr);
	

	imshow("BGR_img", BGR_img), imshow("Gray_img", Gray_img);
	imshow("YCC_arr[0]-Y", YCC_arr[0]), imshow("YCC_arr[1]-Cr", YCC_arr[1]);
	imshow("YCC_arr[2]-Cb", YCC_arr[2]);
	waitKey(0);
	return 0;
}