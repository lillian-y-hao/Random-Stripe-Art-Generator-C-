#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int h = 255, w = 255;

int main () {

	ofstream img ("art.ppm");
	img<<"P3"<<endl;
	img<<w<<" "<<h<<endl;
	img<<"255"<<endl;

	
	// int n3 = rand() % 255 + 1;

	for(int i=0; i<h; i++){
		
		
		for(int j=0; j<w; j++){
			
			srand(time(NULL));
			int r = rand() % 255; //random red value
			int g = rand() % 255; //random green value
			int b = rand() % 255; //random blue value
			int n = rand() % 40; //height of color
			
			for(int k=0; k<n; k++){
				if(i % 3 == 0){
					img<<r<<" "<<g<<" "<<b<<" "<<endl;
				}
				else if (i % 3 == 1){
					img<<g<<" "<<b<<" "<<r<<" "<<endl;
				}
				else {
					img<<b<<" "<<r<<" "<<g<<" "<<endl;
				}
			}
		}

	}

	// for (int i = n1; i < h; i++){

	// 	for (int j = n2; j < w; j++){
	// 		int r = j % 255;
	// 		int g = i % 255;
	// 		int b = i / j % 255;

	// 		img<<r<<" "<<g<<" "<<b<<endl;
	// 	}

	// }

	system("open art.ppm");

}