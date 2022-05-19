#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
long double  fact(double n) 
{
	if (n== 0 || n == 1)

		return 1;
	return n * fact(n - 2);
	
}
int main()
{
	double s, n;
	system("chcp 1251>nul");
	cout << "Введите число для вычисления двойного факториала" << endl;
	cin >> n;
	s = fact(n);
	cout << "Двойной факториал равен " << s << endl;
	system("pause>nul");
	return 0;
}
