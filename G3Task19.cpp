#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	system("chcp 1251>nul");
	int* size;
	srand(3);
	int i = 0;
	int j = 0;
	size = new int;
	cout << "Введите размерность массивов ";
	cin >> *size;
	int* a;
	a = new int[*size];
	int* b;
	b = new int[*size];
	int* c;
	c = new int[(*size)*2];
	for (int i = 0; i < *size; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << "  ";
	}
	cout << endl;
	for (int i = 0; i < *size; i++)
	{
		b[i] = rand() % 10;
		cout << b[i] << "  ";
	}
	cout << endl << "Третий массив с поочерёдными элементами двух других = ";
	do {
		c[i] = a[j];
		i += 2;
		j += 1;
	}
	while (i < (*size) * 2);
	i = 1; j = 0;
	do {
		c[i] = b[j];
		i += 2;
		j += 1;
	}
	while (i < (*size) * 2);
	for (int i = 0; i < (*size)*2; i++)
	{
		cout << c[i] << "  ";
	}
	delete[] a;
	delete[] b;
	delete[] c;
	delete size;
	cout << "\nМассивы и переменная удалены\n";
	system("pause>nul");
	return 0;
}