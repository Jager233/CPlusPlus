#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
struct MyMoney
{
	string name;
	double money;
	double rate;
	int time;
};
double getMoney(MyMoney str)
{
	double s = str.money;
	for (int k = 1; k <= str.time; ++k)
	{
		s *= (1 + str.rate / 100);
	}
	return s;
}
void show(MyMoney str)
{
	cout << "Имя вкладчика: " << str.name << endl;
	cout << "Начальная сумма: " << str.money << endl;
	cout << "Процентная ставка: " << str.rate << endl;
	cout << "Время (лет): " << str.time << endl;
	cout << "Итоговая сумма: " << getMoney(str) << endl;
}
int main()
{
	system("chcp 1251>nul");
	MyMoney cat = { "Кот", 1000, 8, 5 };
	MyMoney dog = {"Пёс", 1200, 7, 4};
	show(cat);
	show(dog);
	system("pause>nul");
	return 0;
}