#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
const int n = 4, m = 4;
void show(double a[n][m])
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
double srar(double a[n][m], int n,int m)
{
	double s = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			s += a[i][j];
		}
	}
	return s / (n * m);
}
int main()
{
	system("chcp 1251>nul");
	double a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << "Введите через ентер элементы" << endl;
			cin >> a[i][j];
		}
	}
	show(a);
	cout << endl<< "Среднее арифметическое всех элементов " << srar(a, n, m) << endl;
	system("pause>nul");
	return 0;
}

