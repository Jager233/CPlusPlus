#include "pch.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
class Alpha
{
private:
	char symb;
public:
	Alpha(char s)
	{
		symb = s;
	}
	void show()
	{
		cout << "Класс Alpha: " << symb << endl;
	}
	void set(char s)
	{
		symb = s;
	}
};
class Bravo :public Alpha
{
public:
	int num;
	Bravo(char s, int n) :Alpha(s)
	{
		num = n;
	}
	void showALL()
	{
		show();
		cout << "Класс Bravo: " << num << endl;
	}
};
int main()
{
	system("chcp 1251>nul");
	Bravo obj('A', 100);
	obj.showALL();
	obj.set('Z');
	obj.showALL();
	system("pause>nul");
	return 0;
}
