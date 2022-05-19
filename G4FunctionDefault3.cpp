#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
double getMoney (double m,double r,int y=1,int n=1)
{
	double s = m;
	double z = n * y;
	double q = r / n;
	for (int k = 1; k <= z; ++k)
	{
		s *= (1 + q / 100);
	}
	return s;
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
	cout << "Вклад на один год: " << getMoney(money, rate) << endl;
	cout << "Вклад на 7 лет: " << getMoney(money, rate,7) << endl;
	cout << "Вклад на 7 лет\n (начисления 3 раза в год): ";
	cout << getMoney(money, rate, 7, 3) << endl;
	system("pause>nul");
	return 0;
}
