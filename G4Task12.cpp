#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
const int n = 5;
void show(double a[n])
{
	for (int i = 0; i < n; ++i)
	{
		cout << " " << a[i] << endl;
	}
}
double &sort(double a[n])
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (a[j + 1] > a[j])
			{
				double tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	return a[4];
}
int main()
{
	system("chcp 1251>nul");
	double a[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Введите через ентер элементы" << endl;
		cin >> a[i];
	}
	show(a);
	cout << endl<< sort(a);
	system("pause>nul");
	return 0;
}
