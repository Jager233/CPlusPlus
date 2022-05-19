#include <cmath>
#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
void A(void(*F)(int&), int arr[], int N)
{
	for (int i = 0; i < N; ++i)
		F(arr[i]);
}

void A(int n, int arr[], int N)
{
	for (int i = 0; i < N; ++i)
		arr[i] *= n;
}

void f(int& a)
{
	a += 3;
}

void show(int arr[], int N)
{
	for (int i = 0; i < N; ++i)
		cout << arr[i] << ' ';
	cout << endl << endl;
}


int main()
{
	system("chcp 1251>nul");
	srand(2);

	const int N = 5;

	int arr[N];
	for (int k = 0; k < N; k++)
	{
		arr[k] = rand() % 14;
	}

	show(arr, N);

	A(f, arr, N);
	show(arr, N);

	int n = 4;
	A(n, arr, N);
	show(arr, N);

	system("pause");
	return 0;
}