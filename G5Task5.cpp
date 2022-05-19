#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
class MyMoney
{
public:
	double money;
	double money1;
	string name;
	double rate;
	double rate1;
	int time;
	double getMoney()
	{
		double s = money;
		for (int k = 1; k <= time; ++k)
		{
			s *= (1 + rate / 100);
		}
		return s;
	}

	double getMoney1()
	{
		double s = money1;
		for (int k = 1; k <= time; ++k)
		{
			s *= (1 + rate1/ 100);
		}
		return s;
	}
	void showALL()
	{
		cout << "Имя: " << name << endl;
		cout << "Вклад первая часть: " << money << endl;
		cout << "Вклад вторая часть: " << money1 << endl;
		cout << "Ставка 1 части (%): " << rate << endl;
		cout << "Ставка 2 части (%): " << rate1 << endl;
		cout << "Период (лет): " << time << endl;
		cout << "Итоговая сумма: " << getMoney()+getMoney1() << endl;

	}
	void setALL(string n, double m, double r, double m1, double r1, int t)
	{
		name = n;
		money = m;
		rate = r;
		money1 = m1;
		rate1 = r1;
		time = t;
	}
	MyMoney(string n, double m, double r, double m1, double r1, int t)
	{
		setALL(n, m, r,m1,r1, t);
	}

	MyMoney()
	{
		setALL("", 0, 0, 0,0,0);
	}

};
class BigMoney : public MyMoney
{
public:
	int periods;
	double getMoney()
	{
		double s = money;
		for (int k = 1; k <= time * periods; ++k)
		{
			s *= (1 + rate / 100 / periods);
		}
		return s;
	}
	void showALL()
	{
		cout << "Имя: " << name << endl;
		cout << "Вклад: " << money << endl;
		cout << "Ставка (%): " << rate << endl;
		cout << "Период (лет): " << time << endl;
		cout << "Начислений в год: " << periods << endl;
		cout << "Итоговая сумма: " << getMoney() << endl;
		cout << "Период (лет): " << time << endl;
		cout << "Итоговая сумма: " << getMoney() + getMoney1() << endl;
	}

	void setALL(string n, double m, double r, double m1, double r1, int t, int p)
	{
		MyMoney::setALL(n, m, r,m1,r1, t);
		periods = p;
	}
	BigMoney(string n, double m, double r, double m1, double r1, int t, int p = 1) :MyMoney(n, m, r,m1,r1, t)
	{
		periods = p;
	}

	BigMoney() :MyMoney()
	{
		periods = 1;
	}

};

int main()
{
	MyMoney objD;
	system("chcp 1251>nul");
	objD.setALL("Почтальон", 800, 10, 800,5, 3);
	cout << endl;
	objD.showALL();
	
	system("pause>nul");
	return 0;
}