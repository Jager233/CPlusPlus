#include "pch.h"
#include <cstdlib>
#include <iostream>
using namespace std;
template<class X>void show(X x)
{
	cout << "Функция с одним аргументом\n";
	cout << "Значение аргумента: " << x << endl;
}
template<class X, class Y>void show(X x, Y y)
{
	cout << "Функция с двумя аргументами\n";
	cout << "Первый аргумент: " << x << endl;
	cout << "Второй: " << y << endl;
}
int main()
{
	system("chcp 1251>nul");
	show('A');
	show(123);
	show("Текст");
	show('B', 456);
	show('C', 'D');






	system("pause>nul");
	return 0;
}
