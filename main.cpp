#include <opencv2/opencv.hpp>
using namespace cv;
 
int main(int argc, char** argv) {
	Mat src = imread(".//Tumbo.jpg");
	
	namedWindow("Tumbo", WINDOW_AUTOSIZE);
	imshow("Tumbo", src);
 
	waitKey(0);
	return 0;
}