// CVTutor.Calib3D.Calibration01.cpp : Defines the entry point for the console application.
// 

// Tutorial:
// http://docs.opencv.org/3.1.0/dc/d43/tutorial_camera_calibration_square_chess.html

#include "stdafx.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/calib3d/calib3d.hpp>

using namespace std;
using namespace cv;

const string WINDOW_NAME = "Display Window";


int main(int argc, char** argv)
{
	string imageName("../../sample-data/left01.jpg");
	if (argc > 1)
	{
		imageName = argv[1];
	}

	Mat img = imread(imageName, IMREAD_GRAYSCALE);

	if (img.empty())
	{
		cerr << "Failed to read the image: " << imageName << endl;
		system("pause");
		return -1;
	}

	imshow(WINDOW_NAME, img);
	waitKey(2000);

	//// tbd:
	//bool found = findChessboardCorners(img, boardSize, ptvec, CALIB_CB_ADAPTIVE_THRESH);

	//imshow(WINDOW_NAME, img);
	//waitKey(2000);





	
	
	system("pause");
	return 0;
}

