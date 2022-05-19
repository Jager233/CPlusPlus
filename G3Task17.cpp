#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	system("chcp 1251>nul");
	int* size;
	srand(3);
	size = new int;
	cout << "Введите размерность массивов ";
	cin >> *size;
	int* a;
	a = new int[*size];
	int* b;
	b = new int[*size];
	int* c;
	c = new int[*size];
	for (int i=0;i<*size;i++)
	{
		a[i] = rand() % 10;
		b[i] = rand() % 10;
		if (a[i] > b[i])
			c[i] = a[i];
		else if (a[i] < b[i])
			c[i] = b[i];
		cout << endl << " " << a[i] << " " << b[i] << " ";
		cout << "    " << c[i];
	}
	delete[] a;
	delete size;
	cout << "\nМассив и переменная удалены\n";
	system("pause>nul");
	return 0;
}