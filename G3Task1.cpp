#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	srand(2);
	int* size;
	size = new int;
	cout << "Введите размер массивов: ";
	cin >> *size;
	int s=0;
	int *a = new int[*size];
	int *b = new int[*size];
	for (int i = 0; i < *size; i++) 
	{
		    a[i] = rand() % 10;
			cout << " " << a[i];
			b[i] = rand() % 10;
			cout << " " << b[i];
			s += a[i] * b[i];
		}
	delete[] a;
	delete[] b;
	delete size;
	cout << " Сумма произведения попарных элементов массивов равна " << s << endl;







	









	system("pause>nul");
	return 0;
}
