#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;
const int n = 15;
int tmp = 0, shift = 0;
void reverse(int a[], int n)
{
	for (unsigned i = 0, j = n - 1; i < j; ++i, --j)
	{
		unsigned tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
int main()
{
	system("chcp 1251>nul");
	srand(4);
	int a[n];
	printf("Массив A: \n");
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
		cout << " " << a[i];

	}
	
	cout << endl << "Введите количество позиций для сдвига" << endl;
	cin >> shift;
	cout << "Массив А циклически сдвинут влево на " << shift << " позиций" << endl;
	for (int i = 0; i < n; ++i)
		printf("%u ", a[i]);
	printf("\n");

	reverse(a, shift);
	reverse(a + shift, n - shift);
	reverse(a, n);

	for (int i = 0; i < n; ++i)
		printf("%u ", a[i]);
	printf("\n");
	system("pause>nul");
	return 0;
}


