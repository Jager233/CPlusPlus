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
			s *=  (1 + rate / 100);
		}
		return s;
	}
	double vuxlop()
	{
		double s = getMoney() - money;
		return s;
}
	void showALL()
	{
		cout << "Имя: " << name << endl;
		cout << "Вклад: " <<money<< endl;
		cout << "Ставка (%): " <<rate<< endl;
		cout << "Период (лет): " <<time<< endl;
		cout << "Итоговая сумма: " <<getMoney()<< endl;
		cout << "Выхлоп с сей движухи: " << vuxlop() << endl;
	}
};
int main ()
{
	system("chcp 1251>nul");
	MyMoney obj;
	cout << "Введите ФИО " << endl;
	cin>>obj.name ;
	cout << "Введите сумму вклада " << endl;
	cin >> obj.money ;
	cout << "Введите процентную ставку " << endl;
	cin >> obj.rate;
	cout << "Введите количество лет " << endl;
	cin >> obj.time;
	obj.showALL();
	system("pause>nul");
	return 0;
}














