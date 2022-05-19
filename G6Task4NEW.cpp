#include "pch.h"
#include <cstdlib>
#include <iostream>
using namespace std;
class tree
{
public:
	int key, data;
	bool state;
	tree* left;//указатель на левого потомка
	tree* right;//указатель на правого потомка
	int  s;
	tree()
	{
		state = true;
		key = 100;
		data = 500;
		
	}

	tree(tree &obj)
	{
		
		key =rand()%200;
		if (key > obj.key)
		{
			obj.right = this;
			data = obj.data + 50;
			state = true;
		}
		else
		{
			obj.right = this;
			data = obj.data - 50;
			state = true;
		}
	}

	~tree()
	{
		if (state)
		{
			delete right,left;
		}
		cout << "Объект с полями " << key << " и " << data << " удалён\n";
	}

	void show()
	{
		cout << "Ключ: " << key << " Данные " << data<<"  "<<s  << endl;
		if (state)
		{
			right->show();
			
		}
	}
};

int main()
{

	srand(3);
	system("chcp 1251>nul");
	int n;
	cout << "Введите кол-во объектов ";
	cin >> n;
	tree* pnt = new tree;
	tree *p;
	p = pnt;
	for (int i = 1; i < n; ++i)
	{
		p = new tree(*p);
	}
	p->state = false;
	pnt->show();
	cout << endl;
	delete pnt;
	system("pause>nul");
	return 0;
}