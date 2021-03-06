#include "Coloring.h"

void ColorMap(Mat* tmp, int arr[][64], int size) {
	Mat mat = *tmp;
	for (int i = 0; i < 64; i++) {
		for (int j = 0; j < 64; j++) {
			if (arr[i][j] == 1) { //BLUE
				for (int y = 0; y < 10; y++) {
					for (int x = 0; x < 10; x++) {
						mat.at<Vec3b>(Point(y + i * 10 + 130, x + j * 10 + 130)) = Vec3b(255, 100, 100);
					}
				}
			}
			else if (arr[i][j] == 11) { //GREEN
				for (int y = 0; y < 10; y++) {
					for (int x = 0; x < 10; x++) {
						mat.at<Vec3b>(Point(y + i * 10 + 130, x + j * 10 + 130)) = Vec3b(0, 255, 30);
					}
				}
			}
			else if (arr[i][j] == 21) { //RED
				for (int y = 0; y < 10; y++) {
					for (int x = 0; x < 10; x++) {
						mat.at<Vec3b>(Point(y + i * 10 + 130, x + j * 10 + 130)) = Vec3b(66, 66, 245);
					}
				}
			}
			else if (arr[i][j] == -1) { //BORDER
				for (int y = 0; y < 10; y++) {
					for (int x = 0; x < 10; x++) {
						mat.at<Vec3b>(Point(y + i * 10 + 130, x + j * 10 + 130)) = Vec3b(204, 204, 204);
					}
				}
			}
		}
	}
}

