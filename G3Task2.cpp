#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double s = 0;
	system("chcp 1251>nul");
	srand(2);
	int* size;
	size = new int;
	cout << "Введите размер массива: " << endl;
	cin >> *size;
	double *a = new double[*size];
	for (int i = 0; i < *size; i++) 
	{
		a[i] = rand() % 10;
		cout << a[i] ;
	}
	for (int i = 0; i < *size; i++)
	{
		s += pow(a[i],2);
	}

	cout << "Сумма квадратов элементов массива = " << s;

	system("pause>nul");
	return 0;
}
