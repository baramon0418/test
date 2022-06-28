#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture capture(0);

	Mat frame(400, 300, CV_8U);
	capture.read(frame);

	Mat  mask(frame.size(), CV_8U, Scalar(0));
	mask(Rect(Point(200, 100), Size(200, 100))).setTo(255);
	CV_Assert(frame.data);

	Scalar sum_value = sum(frame);
	Scalar mean_value1 = mean(frame);
	Scalar mean_value2 = mean(frame, mask);

	cout << "[sum_value] = " << sum_value << endl;
	cout << "[mean_value1] = " << mean_value1 << endl;
	cout << "[mean_value2] = " << mean_value2 << endl << endl;

	Mat mean, stddev;
	meanStdDev(frame, mean, stddev);
	cout << "[mean] = " << mean << endl;
	cout << "[stddev] = " << stddev << endl << endl;

	meanStdDev(frame, mean, stddev, mask);
	cout << "[mean] = " << mean << endl;
	cout << "[stddev] = " << stddev << endl;

	imshow("frame", frame), imshow("mask", mask);

	waitKey();
	return 0;
}