#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
template< class T>class my
{
private:
	T value;
public:
	my(T v)
	{
		value = v;
	}
	void show()
	{
		cout << "Значение поля: " << value << endl;
	}
};
template<>class my<string>
{
private:
	char value[100];
public:
	my(char str)
	{
		int k;
		value[0] = '|';
		for (k = 0; str[k]; ++k)
		{
			value[2 * k + 1] = str[k];
			value[2 * k + 2] = '|';
		}
		value[2 * k + 1] = '\0';
	}
	void show()
	{
		cout << value << endl;
	}
};


int main()
{
	system("chcp 1251>nul");

	my<int> objA(100);
	my<char>objB('A');
	my<string>objC("текст");
	my<char> objD("текст");
	objA.show();
	objB.show();
	objC.show();
	objD.show();
	system("pause>nul");
	return 0;
}
