#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<stdio.h>



void colorReduce(cv::Mat &image, int div)
{
	int nl = image.rows;
	// number of lines     
	// total number of elements per line    
	int nc = image.cols * image.channels();

	printf("%d \n",nl*nc);                          //no. of pixels in an image

	cv::Mat x;
	x=cv::min(image,image);

	//cvNamedWindow("2nd");
	//cv::imshow("2nd", x);

	
	for (int j = 0; j < nl; j++) {
		// get the address of row j        
		uchar* data = image.ptr<uchar>(j);
		for (int i = 0; i < nc; i++) {

			// process each pixel --------------------                                   
			data[i] = data[i] / div*div + div / 2;
			// end of pixel processing ---------------
		}
	}

	
			// set pixel
			//image.at<cv::Vec3b>(x, y) = color;

			
		
	}


