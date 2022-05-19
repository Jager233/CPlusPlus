#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
class MyMoney
{
public:
	double money;
	string name;
	double rate;
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
	double vuxlop()
	{
		double s = getMoney() - money;
		return s;
	}
	MyMoney()
	{
		name = "";
		money = 0;
		rate = 0;
		time = 0;
	}
	MyMoney(string n, double m, double r, int t)
	{
		setALL(n, m, r, t);
	}
	void showALL()
	{
		cout << "Имя: " << name << endl;
		cout << "Вклад: " << money << endl;
		cout << "Ставка (%): " << rate << endl;
		cout << "Период (лет): " << time << endl;
		cout << "Итоговая сумма: " << getMoney() << endl;
		cout << "Выхлоп с сей движухи: " << vuxlop() << endl;
	}
	void setALL(string n, double m, double r, int t)
	{
		name = n;
		money = m;
		rate = r;
		time = t;
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
		cout << "Выхлоп с сей движухи: " << vuxlop() << endl;
	}

	void setALL(string n, double m, double r, int t, int p)
	{
		MyMoney::setALL(n, m, r, t);
		periods = p;
	}
	BigMoney(string n, double m, double r, int t, int p = 1) :
		MyMoney(n, m, r, t)
	{
		periods = p;
	}
	BigMoney() : MyMoney{
	
		periods = 1 ;
	}
};

int main()
{
	system("chcp 1251>nul");
	MyMoney objA("Кот Матроскин", 1200, 8, 5);
	BigMoney objB("Дядя Фёдор", 1000, 7, 6, 2);
	BigMoney objC("Пёс Шарик", 1500, 6, 8);
	BigMoney objD;
	objD.setALL("Почтальон", 800, 10, 3, 4);
	objA.showALL();
	cout << endl;
	objB.showALL();
	cout << endl;
	objC.showALL();
	cout << endl;
	objD.showALL();
	system("pause>nul");
	return 0;
}