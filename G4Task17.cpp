#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
const int n = 5;
void show(int a[n])
{
	for (int i = 0; i < n; ++i)
	{
		cout << " " << a[i] << endl;
	}
}
int* sort(int* a,int n)
{
	int min = 100; int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] <min )
		{
			min = a[i];
			k = i;
		}
	}
	return a+k;
}
int main()
{
	system("chcp 1251>nul");
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Введите через ентер элементы" << endl;
		cin >> a[i];
	}
	show(a);
	int* min=sort(a,n);

	cout << *min << endl;

	system("pause>nul");
	return 0;
}

