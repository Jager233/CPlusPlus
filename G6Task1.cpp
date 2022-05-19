#include "pch.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class MyArr
{
public:
	double a;
	bool state;
	MyArr()
	{
		a = 0;
		state = true;
	}
	void read()
	{
		cout << a << " ";
		if (state)
		{
			(this + 1)->read();
		}
	}
};

int main()
{
	const int n = 5;
	system("chcp 1251>nul");
	srand(3);
	MyArr b[n];
	b[n - 1].state = false;
	for (int k = 0; k < n; ++k)
	{
		b[k].a = rand()%10;
	}
	b[0].read();
	cout << endl;
	system("pause>nul");
	return 0;
}
