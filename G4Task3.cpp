#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
const int N = 1000;
int fibs(int n)
{
	int nums[N];
	int k;
	for (int i = 0; i < n; ++i)
	{
		if (i == 0 || i == 1)
		{
			nums[i] = 1;
		}
		else
		{
			nums[i] = nums[i - 1] + nums[i - 2];
			k = i;
		}
	}
	return nums[k];
}
int main()
{
	int n, a;
	system("chcp 1251>nul");
	cout << "Введите номер числа в последовательности: " << endl;
	cin >> n;
	a = fibs(n);
	cout << "Элемент равен " << a << endl;
	system("pause>nul");
	return 0;
}

