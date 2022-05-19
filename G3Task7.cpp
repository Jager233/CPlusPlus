#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;
const int n = 15;
int s = 0, N = 0;
int main()
{
	system("chcp 1251>nul");
	srand(4);
	int a[n];
	printf("Массив A: \n");
		int max = a[0];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout <<" "<< a[i];
			if (a[i] > max) {
            max = a[i];
			N = i+1;
        }
		
	}
	cout << endl << " Наибольший элемент массива =  " << max <<endl<< " Номер этого элемента "<< N;

	system("pause>nul");
	return 0;
}