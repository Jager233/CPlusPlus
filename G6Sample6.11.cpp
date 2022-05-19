#include "pch.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
class Alpha
{
public:
	char codeA;
	Alpha(char a)
	{
		codeA = a;
	}
	virtual void show()
	{
		cout << "Метод из класса Alpha: " << codeA << endl;
	}
};
class Bravo
{
public:
	char codeB;
	Bravo(char b)
	{
		codeB = b;
	}
	virtual void show()
	{
		cout << "Метод из класс Bravo: " << codeB << endl;
	}
};
class Charlie :public Alpha, public Bravo
{
public:
	Charlie(char a, char b) :Alpha(a), Bravo(b)
	{}
	void show()
	{
		cout << "Метод из класс Charlie: ";
		cout << codeA << codeB << endl;
	}
};
int main()
{
	system("chcp 1251>nul");
	Alpha objA('A');
	objA.show();
	Bravo objB('B');
	objB.show();
	Charlie objC('C', 'D');
	objC.show();
	objA = objC;
	objB = objC;
	objA.show();
	objB.show();
	cout << "Используем указатели\n";
	Alpha* pntA = &objC;
	Bravo* pntB = &objC;
	Charlie* pntC = &objC;
	pntA->show();
	pntB->show();
	pntC->show();
	system("pause>nul");
	return 0;
}