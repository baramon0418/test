#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
Mat image;
int thickness = 1;  
int radius = 20;

string title = "트랙바 이벤트";


void onChange(int value, void* userdata)
{
    int add_value = value;
    cout << "선의 굵기 추가" << add_value << endl;
    Mat tmp = image + add_value;
    imshow(title, tmp);
}


void onMouse(int event, int x, int y, int flags, void* param)
{
    static Point pt(-1, -1);
    Scalar blue(255, 0, 0);
    if (event == EVENT_LBUTTONDOWN) {
        pt = Point(x, y);
        Rect rect(pt, Size(30, 30));

        rectangle(image, rect, blue, thickness);
        imshow(title, image);



    }
    else if (event == EVENT_RBUTTONDOWN) {
        pt = Point(x, y);
        circle(image, pt, radius, blue, thickness, 1);
        imshow(title, image);
    }
}
int main()
{
    Scalar white = Scalar(255, 255, 255);
    image = Mat(300, 500, CV_8UC3, white);
    imshow(title, image);
    setMouseCallback(title, onMouse, 0);



    namedWindow(title, WINDOW_AUTOSIZE);
    createTrackbar("선의 굵기", title, &thickness, 10, onChange);
    createTrackbar("원의 반지름", title, &radius, 50, onChange);
    setMouseCallback(title, onMouse, 0);

    imshow(title, image);



    waitKey(0);
    return 0;
}