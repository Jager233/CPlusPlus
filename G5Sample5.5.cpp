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
		for (int k = 1; k <= 35; ++k)
		{
			cout << "-";
		}
		cout << endl;
	}
	void setALL(string n, double m, double r, int t)
	{
		name = n;
		money = m;
		rate = r;
		time = t;
	}

MyMoney operator++()
{
	money = money + 1000;
	return *this;
}
MyMoney operator++(int)
{
	time++;
	return *this;
}
MyMoney operator+(MyMoney obj)
{
	MyMoney tmp;
	tmp.name = "Почтальон Печкин";
	tmp.money = money + obj.money;
	tmp.rate = (rate > obj.rate) ? rate : obj.rate;
	tmp.time = (time + obj.time) / 2;
	return tmp;
}


};


double operator-(MyMoney objX, MyMoney objY)
{

	return objX.getMoney() - objY.getMoney();
}

MyMoney operator--(MyMoney &obj)
{
	if (obj.money > 1000)
	{
		obj.money -= 1000;
	}
	else { obj.money = 0; }
	return obj;
}




MyMoney operator--(MyMoney &obj, int)
{
	if (obj.time > 0)
	{
		obj.time--;
	}
	else
	{
		obj.time = 0;
	}
	return obj;
}

int main()
{
	system("chcp 1251>nul");
	MyMoney objA("Кот Матроскин", 1200, 7, 1);
	objA.showALL();
	objA--;
	objA.showALL();
	objA--;
	objA.showALL();
	objA++;
	objA.showALL();
	--objA;
	objA.showALL();
	--objA;
	objA.showALL();
	++objA;
	objA.showALL();
	MyMoney objB("Пёс Шарик", 1100, 8, 5);
		objB.showALL();

	MyMoney objC;
	objC = objA + objB;
	objC.showALL();
	cout << "Разница в доходах: " << objC - objB << endl;
	system("pause>nul");
	return 0;
}