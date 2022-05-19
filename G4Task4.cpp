#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
long double  fact(double a) {
	return (a == 0) ? 1 : a * fact(a - 1);
}
long double binom(double k, double n)
{
	long double c;
	return c = fact(n) / (fact(k)*fact(n - k));
}
int main()
{
	double s, n,k;
	system("chcp 1251>nul");
	cout << "Введите коэффициенты для вычисления биноминальных коэффицентов " << endl;
	cout << "n= " << endl;
	cin >> n;
	cout << "K= " << endl;
	cin >> k;
	if (k > n) { cout << "Нихуя подобного к больше н так нельзя "; return 0; }
	s = binom(k,n);
	cout << "Коэф получился кароч " << s << endl;
	system("pause>nul");
	return 0;
}
