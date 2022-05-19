#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	srand(2);
	const int width = 10, height = 10;
	int s = 0;
	int a[width][height];
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
			s += pow(a[i][j], 2);
		}
		cout << endl;
	}
	cout << "Сумма квадратов элементов массива= " << s;

	system("pause>nul");
	return 0;
}
