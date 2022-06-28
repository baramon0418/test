#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("C:\\Users\\wnjsw\\바탕 화면\\logo.jpg", 1);
	Mat bgr[3];
	split(image, bgr);

	Mat color = Mat::zeros(image.size(), CV_8UC1);
	Mat R[] = { color, color, bgr[2] };
	Mat G[] = { color, bgr[1], color };
	Mat B[] = { bgr[0], color, color };
	merge(R, 3, bgr[2]);
	merge(G, 3, bgr[1]);
	merge(B, 3, bgr[0]);

	imshow("image", image);
	imshow("blue", bgr[0]);
	imshow("green", bgr[1]);
	imshow("red", bgr[2]);


	waitKey(0);
	return 0;
	
}