#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
    Mat image = imread("C:\\Users\\wnjsw\\바탕 화면\\ex_color.jpg",IMREAD_COLOR);
    Mat mask(image.size(), CV_8U, Scalar(0));
    Mat dst1,dst2,dst3;

    ellipse(mask, Point(120, 120), Size(50, 80), 0, 0, 360, Scalar(255), -1);


    bitwise_and(image, image, dst1, mask);
    bitwise_or(image, image, dst2, mask);
    bitwise_and(dst1,dst2,dst3);

    imshow("dst1", dst1);

    imshow("image", image);

    waitKey(0);
    return 0;
}