#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	system("chcp 1251>nul");
	int* size1;
	int* size2;
	srand(3);
	size1 = new int;
	size2 = new int;
	cout << "Введите размерность 1 массива ";
	cin >> *size1;
	cout << "Введите размерность 2 массива ";
	cin >> *size2;
	int* a;
	a = new int[*size1];
	int* b;
	b = new int[*size2];
	int* c;
	c = new int[*size1+*size2];
	for (int i = 0; i < *size1; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << "  ";
	}
	cout << endl;
	for (int i = 0; i < *size2; i++)
	{
		b[i] = rand() % 10;
		cout << b[i] << "  "  ;
	}
	cout <<endl<< "Третий массив являющийся суммуой двух других = ";
	for (int i=0;i<*size1;i++)
	{
		c[i] = a[i];
	}
	for (int i = 0; i < *size1+*size2; i++) 
	{
		for (int j = *size1 ; j < *size1+*size2; j++)
		{
			c[j] = b[j - *size1];
		}
		cout << " " << c[i];
	}
	delete[] a;
	delete[] b;
	delete[] c;
	delete size1;
	delete size2;
	cout << "\nМассив и переменная удалены\n";
	system("pause>nul");
	return 0;
}