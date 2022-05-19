#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
long double  fact(double a) {
	return (a == 0) ? 1 : a * fact(a - 1);
}
long double exp(long double x,long double n)
{
	long double s=0;
	if (n >= 0)
	{
		s += ((pow(x, n) / fact(n))) + exp(x, n - 1);
	}
	return s;
}
int main()
{
long	double x, n;
	system("chcp 1251>nul");
	cout << "Введите число для вычисления экспоненты от него " << endl;
	cin >> x;
	cout << "Введите точность вычисления " << endl;
	cin >> n;
	cout << "Сумма равна " << exp(x, n) << endl;
	cout << "Встроенной функцией: " << exp(x) << endl;
	system("pause>nul");
	return 0;
}