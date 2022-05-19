#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
template<class A>class Al
{
public:
	A al;
	Al(A a)
	{
		al = a;
	}
	void show()
	{
		cout << "Поле alpha: " << al << endl;
	}
};

template<class B>class Br
{
public:
	B br;
	Br(B b)
	{
		br = b;
	}
	void show()
	{
		cout << "Поле bravo: " << br << endl;
	}
};
 
template <class A, class B, class C>class Ch : public
Al<A>, public Br<B>
{
public:
	C ch;
	Ch(A a, B b, C c) :Al<A>(a), Br<B>(b)
	{
		ch = c;
	}
	void show()
	{
		Al<A>::show();
		Br<B>::show();
		cout << "Поле chrlie: " << ch << endl;
	}
};

int main()
{
	system("chcp 1251>nul");
	Ch<string, char, int>objA("текст", 'A', 100);
	Ch<int, double, char>objB(200, 5.5, 'B');
	objA.show();
	objB.show();






	system("pause>nul");
	return 0;
}
