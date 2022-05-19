#include "pch.h"
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

class tree
{
public:
	int key; //ключ – значение узла, типа int
	tree* left;    //указатель на левого потомка
	tree* right;   //указатель на правого потомка
	bool state;
	tree()
	{
		key = 100;
		left = 0;
		right = 0;
		state = true;
	}

	tree(tree &obj)
	{
		obj.left = this;
		key = obj.key - 1;
		state = true;
	}

	tree(tree &obj,int)
	{
		obj.right = this;
		key = obj.key + 1;
		state = true;
	}

	~tree()
	{
		if (state)
		{
			delete  left,right;
		}
		cout << "Узел с полем " << key << " удалён " << endl;
	}


	void showw()
	{
		cout << key << endl;
		if (state)
		{
			
			right->showw();
		}
	}

	void show()
	{
		cout << key << endl;
		if (state)
		{

			left->show();
		}
	}

};
	int main()
	{
		int n;
		srand(3);
		system("chcp 1251>nul");
		cout << "Введите кол-во объектов ";
		cin >> n;
		cout << endl;
		tree* pnt = new tree;
		tree *p;
		tree *q;
		p = pnt;
		q = pnt;
		for (int i = 1; i < n; ++i)
		{
			p = new tree(*p,1);
		}
		p->state = false;
		pnt->showw();
		cout << endl;
		for (int i = 1; i < n; ++i)
		{
			q = new tree(*q);
		}
		q->state = false;
		pnt->show();
		cout << endl;
		delete pnt;



		system("pause>nul");
		return 0;
	}





