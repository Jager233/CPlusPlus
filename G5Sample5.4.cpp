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

	MyMoney()
	{
		name = "Кот Матроскин";
		money = 100;
		rate = 5;
		time = 1;
		cout << "Создан новый объект:\n";
		showALL();
	}

	MyMoney(string n, double m, double r, int t)
	{
		setALL(n, m, r, t);
		cout << "Создан новый объект:\n";
		showALL();
	}

	~MyMoney()
	{
		cout << "Объект для \"" << name << "\"удалён\n";
		for (int k = 1; k <= 35; ++k)
		{
			cout << "*";
		}
		cout << endl;
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
	
};

void postman()
{
	MyMoney objD("Почтальон Печкин", 200, 3, 2);
}
int main()
{
	system("chcp 1251>nul");
	MyMoney objA;
	MyMoney objB("Дядя Фёдор", 1500, 8, 7);
	postman();
	MyMoney* objC = new MyMoney("Пёс Шарик", 1200, 6, 9);
	cout << "Все объекты созданы\n";
	delete objC;
	cout << "Выполнене программы завершено\n";
	cout << endl;
	system("pause>nul");
	return 0;
}