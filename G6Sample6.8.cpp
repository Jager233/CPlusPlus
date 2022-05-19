#include "pch.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
class Alpha
{
public:
	virtual void show()
	{
		cout << "Класс Alpha: " << endl;
	}
	void showALL()
	{
		show();
	}
};
class Bravo :public Alpha
{
public:
	void show()
	{
		cout << "Класс Bravo" << endl;
	}
};
int main()
{
	system("chcp 1251>nul");
	Bravo obj;
	obj.show();
	obj.showALL();
	system("pause>nul");
	return 0;
}
