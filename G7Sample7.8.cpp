#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
template<class A = int, class B = char>class my
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
		cout << "Значения " << first << " и " << second << endl;
	}
};
int main()
{
	system("chcp 1251>nul");
	my<double, int>objA(3.5, 100);
	my<string>objB("текст", 'A');
	my<>objC(200, 'B');
	objA.show();
	objB.show();
	objC.show();



	system("pause>nul");
	return 0;
}