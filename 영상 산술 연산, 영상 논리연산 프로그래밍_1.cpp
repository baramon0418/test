#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

string title = "main";
Mat image;
Point p1(0, 0);
Point p2(0, 0);

void showNewImg();


void onMouse(int event, int x, int y, int flags, void* param) {
	switch (event) {
	case EVENT_LBUTTONDOWN:
		p1.x = x;
		p1.y = y;
		p2.x = x;
		p2.y = y;
		break;
	case EVENT_LBUTTONUP:
		p2.x = x;
		p2.y = y;
		showNewImg();

	default:
		break;
	}
}


int main() {
	image = imread("C:\\Users\\wnjsw\\바탕 화면\\color_space.jpg", IMREAD_COLOR);
	CV_Assert(image.data);

	imshow(title, image);

	setMouseCallback(title, onMouse, 0);
	waitKey();

	return 0;

}

void showNewImg() {//관심영역이 맞는 새로운 윈도우를 표시
	int wdth = p2.x - p1.x;
	int hgt = p2.y - p1.y;
	Rect roi(p1.x, p1.y, wdth, hgt);//관심영역 
	Mat draggedImage = image.clone();
	Mat newimg = draggedImage(roi);

	imshow("선택영역", newimg);

	Scalar white(255, 255, 255);
	newimg = white - newimg;
	imshow(title, draggedImage);
}