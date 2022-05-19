#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
long double  fact(double a) {
	return (a == 0) ? 1 : a * fact(a - 1);
}
int main()
{
	double s, n;
	system("chcp 1251>nul");
	cout << "Введите число для вычисления факториала" << endl;
	cin >> n;
	s=fact(n);
	cout << "Факториал равен " << s << endl;
	system("pause>nul");
	return 0;
}
