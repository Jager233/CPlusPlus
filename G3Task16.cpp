#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	system("chcp 1251>nul");
	int* size;
	srand(3);
	size = new int;
	*size = rand() % 10+1;
	int middle = *size / 2 + (*size & 1);
	int* a;
	a = new int[*size];
	for(int i=0;i<middle;i++)
	{
		a[i] = a[*size - i - 1] = i + 1;
	}
	for (int i = 0; i < *size; i++) {
		cout << a[i] << " ";
	}
		
	
	
		


	delete[] a;
	delete size;
	cout << "\nМассив и переменная удалены\n";

	system("pause>nul");
	return 0;
}