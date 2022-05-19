#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class MyClass {
public:
	string name;
	int number;
	void show()
	{
		cout << "Поле name: " << name << endl;
		cout << "Поле number: " << number << endl;

	}
};

int main()
{
	system("chcp 1251>nul");
	MyClass objA, objB;
	MyClass* p;
	p = &objA;
	p->name = "Объект objA";
	p->number = 111;
	p->show();
	p = &objB;
	p->name = "Объект objB";
	p->number = 222;
	p->show();
	cout << "Проверяем оъеккты\n";
	objA.show();
	objB.show();














	system("pause>nul");
	return 0;
}