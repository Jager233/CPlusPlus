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
};
int main()
{
	system("chcp 1251>nul");
	MyMoney objA, objB;
	objA.setALL("Иванов Иван Иванович", 1000, 8, 5);
	objB.setALL("Петров Пётр Петрович", 1200, 7, 4);
	objA.showALL();
	cout << endl;
	objB.showALL();
	system("pause>nul");
	return 0;
}


