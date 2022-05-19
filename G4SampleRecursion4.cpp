#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
double getMoney(double m, double r, int y)
{
	if (y==0)
	{
		return m;
	}
	else 
	{
		return (1 + r / 100)*getMoney(m, r, y - 1);
	}
}
int main()
{
	system("chcp 1251>nul");
	double money;
	double rate;
	cout << "Введите начальную сумму вклада: ";
	cin >> money;
	cout << "Введите годовую ставку: ";
	cin >> rate;
	cout << endl;
	cout << "Начальная сумма: " << money << endl;
	cout << "Годовая ставка: " << rate << "%\n";
	cout << "Вклад на один год: " << getMoney(money, rate,1) << endl;
	cout << "Вклад на 7 лет: " << getMoney(money, rate, 7) << endl;
	cout << "Вклад на 10 лет: " << getMoney(money, rate,10) << endl;
	system("pause>nul");
	return 0;
}
