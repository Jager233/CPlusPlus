#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int &getMax(int* nums, int n)
{
	int i = 0, k;
	for (k = 0; k < n; ++k)
	{
		if (nums[k] > nums[i])
		{
			i = k;
		}
	}
	return nums[i];
}
void show(int* nums, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
}
int main()
{
	system("chcp 1251>nul");
	const int size = 10;
	int a[size] = { 1,5,8,2,4,9,11,9,12,3 };
	show(a, size);
	int mP = getMax(a, size);
	cout << "Максимальное значение: " << mP << endl;
	mP = -100;
	show(a, size);
	int &mN =getMax(a, size);
	cout << "Максимальное значение: " << mN << endl;
	mN = -200;
	show(a, size);
	cout << "Максимальное значение: ";
	cout << getMax(a, size) << endl;
	cout << "Индекс элемента: ";
	cout << getMax(a, size) << endl;
	system("pause>nul");
	return 0;
}
