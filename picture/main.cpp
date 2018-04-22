#include <opencv2/opencv.hpp> 
using namespace cv;

#define WINDOW_NAME  "ªÊ÷∆Õº"
#define WINDOW_WDITH  600

void DrawEllipse(Mat img, double angle);
void DrawFilledCircle(Mat img, Point center);
void DrawLine(Mat img, Point start, Point end);

int main()
{
	Mat atomImage = Mat::zeros(WINDOW_WDITH, WINDOW_WDITH, CV_8UC3);

	DrawEllipse(atomImage, 90);
	DrawEllipse(atomImage, 0);
	DrawEllipse(atomImage, 45);
	DrawEllipse(atomImage, -45);

	DrawFilledCircle(atomImage, Point(WINDOW_WDITH / 2, WINDOW_WDITH / 2));

	imshow(WINDOW_NAME, atomImage);
//	moveWindow(WINDOW_NAME, 500, 300);

	waitKey(0);
	return 0;
}

void DrawEllipse(Mat img, double angle)
{
	int thickness = 2;
	int lineType = 8;
	ellipse(img,
		Point(WINDOW_WDITH / 2, WINDOW_WDITH / 2),
		Size(WINDOW_WDITH / 4, WINDOW_WDITH / 16),
		angle,
		0,
		360,
		Scalar(255, 129, 0),
		thickness,
		lineType);
}

void DrawFilledCircle(Mat img, Point center)
{
	int thickness = -1;
	int lineType = 8;
	circle(img,
		center,
		WINDOW_WDITH / 32,
		Scalar(255, 129, 0),
		thickness,
		lineType);
}

void DrawLine(Mat img, Point start, Point end)
{
	int thickness = 2;
	int lineType = 8;
	line(img,
		start,
		end,
		Scalar(0, 0, 0),
		thickness,
		lineType);
}

