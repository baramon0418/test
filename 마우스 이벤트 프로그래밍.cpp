#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

string title = "마우스 이벤트";
Mat image;
void onMouse(int event, int x, int y, int flags, void* param)
{
    static Point pt(-1, -1);
    Scalar blue(255, 0, 0);
    if (event == EVENT_LBUTTONDOWN) {
        pt = Point(x, y);
        Rect rect(pt, Size(30, 30));

        rectangle(image, rect, blue, 1);
        imshow(title, image);
    }
    else if (event == EVENT_RBUTTONDOWN) {
        pt = Point(x, y);
        circle(image, pt, 20, blue, 1);
        imshow(title, image);
    }
}
int main()
{
    Scalar white = Scalar(255, 255, 255);
    image = Mat(300, 500, CV_8UC3, white);
    imshow(title, image);
    setMouseCallback(title, onMouse, 0);

    waitKey(0);
    return 0;
}