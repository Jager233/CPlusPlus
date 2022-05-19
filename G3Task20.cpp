#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	int mi, mj;
	srand(3);
	const int width = 4, height = 4;
	int s = 0, n, m, i = 0, j = 0;
	int b[height-1][width-1];
	int a[height][width];
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			a[i][j] = rand() % 10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Введите номер вычёркиваемой строки: ";
	cin >> n;
	cout << "Введите номер вычёркиваемого столбца: ";
	cin >> m;
	cout << "Новый массив: "<<endl;
	mi = n-1; mj = m-1;
	int ii = 0;
	for (i = 0; i < height - 1; i++, ++ii)
	{
		if (mi == ii)
			++ii;
		int jj = 0;
		for (j = 0; j < width - 1; j++, ++jj)
		{
			if (jj == mj)
				++jj;
			b[i][j] = a[ii][jj];
		}
	}
	for (int i = 0; i < height-1; i++) {
		for (int j = 0; j < width-1; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	system("pause>nul");
	return 0;
}



