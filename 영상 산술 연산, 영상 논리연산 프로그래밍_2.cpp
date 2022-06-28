#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
    Mat  m1(10, 20, CV_8UC1);


    for (int i = 0, k = 0; i < m1.rows; i++)
    {



        uchar* ptr_m1 = m1.ptr(i);

        for (int j = 0; j < m1.cols; j++)
        {
            if (i == 5) {
                ptr_m1[j] = j + 100;
            }
            else if (i == 6) {
                ptr_m1[j] = j + 100;
            }
            else if (i == 7) {
                ptr_m1[j] = j + 100;
            }
            else if (i == 8) {
                ptr_m1[j] = j + 100;
            }
            else if (i == 9) {
                ptr_m1[j] = j + 100;
            }
            else if (i == 10) {
                ptr_m1[j] = j + 100;
            }
            else {
                ptr_m1[j] = j;
            }


        }
    }
    cout << "m1 = " << endl << m1 << endl << endl;

    return 0;
}