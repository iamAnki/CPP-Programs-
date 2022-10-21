#include "opencv2/opencv.hpp"

#include "opencv2/highgui/highgui.hpp"

#include "opencv2/core/core.hpp"



using namespace cv;

using namespace std;



int main(int argc, char* argv[]) {

	Mat image = imread(argv[1]);



	if (!image.data) {

		cout << "Couldn't open or find the image! " << endl;

		return -1;

	}



	Mat gray(image.rows, image.cols, CV_8UC1, Scalar(0));



	cvtColor(image, gray, COLOR_BGR2GRAY);

		

	int histogram[256]; //Declare an array to allocate memory for all the intensity values

	

	//Initialize “0” to all the array elements

	for (int i = 0; i < 256; i++)

		histogram[i] = 0;



	//Count one by one pixel for each intensity value

	for (int y = 0; y < image.rows; y++) {

		for (int x = 0; x < image.cols; x++) {

			int pix_in = (int)gray.at<uchar>(y, x);

			int cnt = histogram[(int)gray.at<uchar>(y, x)]; // find how many number of pixels for each intensity currntly

			histogram[(int)gray.at<uchar>(y, x)] = cnt + 1; // that value increment by 1 and assign to relevant intensity of the histogram array

			//histogram[(int)gray.at<uchar>(y, x)]++

		}

	}

		

	for (int i = 0; i < 256; i++)

		cout << i << " : " << histogram[i] << endl;



	int histogram_height = 600;

	int histogram_width = 650;

	int bin_w = round((double)histogram_width / 256);

	cout << "width of the line" << (double)histogram_width / 256 << endl;

	cout << "width of the line" << bin_w << endl;

	



	Mat histImage(histogram_height, histogram_width, CV_8UC1, Scalar(0, 0, 0)); //Create a window to draw the histogram



	//Find the maximum number of pixels from histogram array

	int max = histogram[0];

	for (int i = 1; i < 256; i++){

		if (max < histogram[i])

			max = histogram[i];

	}



	//Normalize the histogram array values between 0 and histogram window height

	for (int i = 0; i < 256; i++) {

		histogram[i] = round(((double)histogram[i] / max)* histogram_height);

		//cout << histogram[i] << endl;

	}



	//Draw the lines on histogram window

	for (int i = 0; i < 256; i++) {

		line(histImage, Point(bin_w * (i), histogram_height), Point(bin_w * (i), histogram_height - histogram[i]), Scalar(255, 255, 255), 1, 8, 0);

	}

	



	namedWindow("Image");

	imshow("Image", image);



	namedWindow("Gray");

	imshow("Gray", gray);



	namedWindow("Histogram");

	imshow("Histogram", histImage);



	waitKey(0);



	return 0;

}

