#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
long double  fact(double a) {
	return (a == 0) ? 1 : a * fact(a - 1);
}
long double fun(long double x)
{
	return x;
}
long double fun(long double x, long double y)
{
	return pow(x, 2) + pow(y, 2);
}
long double fun(long double x, long double y, long double z)
{
	return pow(x, 3) + pow(y, 3) + pow(z, 3);
}
int main()
{
	long	double x, y, z;
	system("chcp 1251>nul");
	cout << "Введите число для вычисления (0 если ввод завершён) " << endl;
	cin >> x;
	if (x != 0)
	{
		cout << "Введите второе число " << endl;
		cin >> y;
	}
	else 
	{
		return 0;
	}
	if (y != 0)
	{
		cout << "Третье " << endl;
		cin >> z;
	}
	else
	{
		cout << "Результат вычислений: " << fun(x);
		return 0;
	}
	if (z != 0)
	{
		cout << "Результат вычислений: " << fun(x, y,z);
	}
	else
	{
		cout << "Результат вычислений: " << fun(x, y);
	}
	return 0;
}