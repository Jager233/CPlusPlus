#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
template< class A, class B>class my
{
public:
	A first;
	B second;
	my(A f, B s)
	{
		first = f;
		second = s;
	}
	void show()
	{
		cout << "Первое поле: " << first << endl;
		cout << "Второе поле: " << second << endl;
	}
};
int main()
{
	system("chcp 1251>nul");
	my<int,char>objA(100, 'A');
	my<string, double>objB("текст", 10.5);
	my<string,string> objC ( "первый", "второй");
	my<int, int>objD(1, 2);
	objA.show();
	objB.show();
    objC.show();
	objD.show();
	system("pause>nul");
	return 0;
}