#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
double getMoney(double m,double r)
{
	return m * (1 + r / 100);
}
double getMoney(double m,double r,int y)
{
	double s = m;
	for(int k=1;k<=y;++k)
	{
		s *= (1 + r / 100);
	}
	return s;
}
double getMoney(double m, double r, int y,int n)
{
	return getMoney(m, r / n, y*n);
}int main ()
{
	system("chcp 1251>nul");
	double money;
	cout << "Введите начальную сумму вклада: ";
	cin >> money;
	double rate;
	cout << "Годовая ставка: %\n";
	cin >> rate;
	cout << endl;
	cout << "Начальная сумма: " << money << endl;
	cout << "Годовая ставка: " << rate << endl;
	cout << "Вклад на один год: "<<getMoney(money, rate) << endl;
	cout << "Вклад на 7 лет: "<<getMoney(money, rate,7) << endl;
	cout << "Вклад на 7 лет\n (начисления 3 раза в год): " << endl;
	cout <<getMoney(money, rate, 7,3) << endl;
	system("pause>nul");
	return 0;
}