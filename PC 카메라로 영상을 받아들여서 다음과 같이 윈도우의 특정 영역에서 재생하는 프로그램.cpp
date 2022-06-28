#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;


VideoCapture  capture;
int main()
{
    capture.open(0);
    CV_Assert(capture.isOpened());

    capture.set(CAP_PROP_FRAME_WIDTH, 400);
    capture.set(CAP_PROP_FRAME_HEIGHT, 300);
    capture.set(CAP_PROP_EXPOSURE, -4);
    capture.set(CAP_PROP_BRIGHTNESS, 150);

    for (;;) {
        Mat frame;
        capture.read(frame);

        Mat roi;
        roi = frame(Rect(30, 30, 320, 240));

        Mat mask(frame.size(), CV_8U, Scalar::all(0));
        Mat dst1;


        rectangle(mask, Point(30, 30), Size(320, 240), Scalar(255,0,0), -1);
        rectangle(frame, Point(30, 30), Size(320, 240), Scalar(0, 0, 255), 3);

        bitwise_and(frame, frame, dst1, mask);

        imshow("메인 윈도우", dst1);


        if (waitKey(30) >= 0) break;
    }
    return 0;
}