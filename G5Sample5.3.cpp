#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
class MyMoney
{
private:
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
public:
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
	void setALL( double m, double r, int t)
	{
		money = m;
		rate = r;
		time = t;
	}
	void setALL(string n)
	{
		name = n;
	}
	void setALL(int t)
	{
		time = t;
	}
	void setALL(double m, double r)
	{
		money = m;
		rate = r;
	}
	void setALL(double x,bool s=true)
	{
		if (s)
		{
			money = x;
		}
		else
		{
			rate = x;
		}
	}
};
int main()
{
	system("chcp 1251>nul");
	MyMoney obj;
	obj.setALL("Иванов Иван Иванович", 1000, 8, 5);
	obj.showALL();
	cout << endl;

	obj.setALL("Петров Пётр Петрович");
	obj.showALL();
	cout << endl;

	obj.setALL(10);
	obj.showALL();
	cout << endl;

	obj.setALL(1200.0);
	obj.showALL();
	cout << endl;

	obj.setALL(1500, true);
	obj.showALL();
	cout << endl;

	obj.setALL(6, false);
	obj.showALL();
	cout << endl;

	obj.setALL(1000,8,5);
	obj.showALL();
	cout << endl;

	system("pause>nul");
	return 0;
}