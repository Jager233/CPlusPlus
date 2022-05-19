#include "pch.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
class Alpha
{
public:
	int alpha;
	Alpha(int a)
	{
		alpha = a;
	}
	void show()
	{
		cout << "Класс Alpha: " << alpha << endl;
	}
};
class Bravo 
{
public:
	int bravo;
	Bravo(int b)
	{
		bravo = b;
	}
	void show()
	{
		cout << "Класс Bravo: " << bravo << endl;
	}
};
class Charlie :public Alpha, public Bravo
{
public:
	int charlie;
	Charlie(int a, int b, int c) :Alpha(a), Bravo(b)
	{
		charlie = c;
	}
	void show()
	{
		Alpha::show();
		Bravo::show();
		cout << "Класс Charlie: " << charlie << endl;
	}
};
int main()
{
	system("chcp 1251>nul");
	Charlie obj(10, 20, 30);
	obj.show();
	system("pause>nul");
	return 0;
}