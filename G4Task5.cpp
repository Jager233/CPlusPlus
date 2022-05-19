#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
double sum(double n, double k)
{
	double s=0,ss=0;
	if (k == 1)
	{
		for (int i = 1; i <= n; ++i)
		{
			 s += i;
		}
		return s;
	}
	if (n==0)
	{
		return ss;
	}
	if (k > 1)
	{
			ss += pow(n,k) + sum(n - 1, k);
	}
	return ss;
	}
int main()
{
	double n,k;
	system("chcp 1251>nul");
	cout << "Введите число для вычисления суммы всех натуральных чисел до этого " << endl;
	cin >> n;
	cout << "Введите степень  в которую будут возводиться слагаемые " << endl;
	cin >> k;
	cout << "Сумма равна " << sum(n,k);
	system("pause>nul");
	return 0;
}

