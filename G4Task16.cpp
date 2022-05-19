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
	double max = 0; int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
			k = i;
		}
	}
	return a[k];
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
	sort(a);

	cout << sort(a) << endl;

	system("pause>nul");
	return 0;
}

