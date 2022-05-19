#include <cmath>
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
double polinom(double a[n], double x)
{
	double s = 0;
	for (int i = 0; i < n; ++i)
	{
		s += a[i] * pow(x, i);
		
	}
	return s;
}
void polinom(double a[n])
{
	for (int i = 0; i < n; ++i)
	{
		cout << " " << a[i] << endl;
	}
}
int main()
{
	system("chcp 1251>nul");
	double x;
	double a[n];
	double s = 0,vub;
	cout << "Если хэ есть введи 1,  если хэ нет тоды 0" << endl;
	cin >> vub;

	if (vub == 1)
	{
		cout << "Введите точку в которой будет вычисляться полином" << endl;
		cin >> x;
		cout << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << "Введите через ентер элементы" << endl;
			cin >> a[i];
		}
		cout << "Числа " << endl;
		show(a);
		cout << "Точка вычисления " << x << endl;
		cout << "Полином равен " << polinom(a, x) << endl;
	}
	else if (vub == 0)
	{
		for (int i = 0; i < n; ++i)
		{
			cout << "Введите через ентер элементы" << endl;
			cin >> a[i];
		}
		polinom(a);
	}
	system("pause>nul");
	return 0;
}