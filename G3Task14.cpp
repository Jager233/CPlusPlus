#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	srand(2);
	const int width =4, height = 4;
	int s = 0;
	int b[height];
	int a[height][width];
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << " Максимальные элементы в каждой строке ";
	for (int i = 0; i < height; i++) {
		b[i] = a[i][0];
		for (int j = 1; j < width; j++) {
			if (b[i] < a[i][j]) {
				b[i] = a[i][j];
			}
		}
		cout << "  " << b[i];
	}
	system("pause>nul");
	return 0;
}
