#include "pch.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
const int n = 5;
class ring
{
private:
	double a[n];
	double r;
	char s;
public:
	bool state;
	ring* next;

	ring()
	{
		r = rand() % 10;
		s = rand();
		state = true;
	}

	ring(ring &obj)
	{
		obj.next = this;
		r = obj.r + 1;
		s = obj.s + rand() % 'A' + 100;
		state = true;
	}

	~ring()
	{
		if (state)
		{
			delete next;
		}
		cout << "Объект с полями " << r << " и " << s << " удалён\n";
	}

	void show()
	{
		cout << "Класс кольцо: " << s << " значение " << r << endl;
		if (state)
		{
			next->show();
		}
	}
};

int main()
{
	
	srand(3);
	system("chcp 1251>nul");
	ring* pnt = new ring;
	ring *p;
	p = pnt;
	for (int i =1; i < n; ++i)
	{
		p = new ring(*p);
	}
	p->state=false;
	pnt->show();
	cout << endl;
	delete pnt;
	system("pause>nul");
	return 0;
}
