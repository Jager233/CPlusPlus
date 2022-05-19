#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	system("chcp 1251>nul");
	const int size = 3;
	int k;
	char symbs[size];
	char* p;
	char* q;
	p = symbs;
	for (int i=0;i<size;i++)
	{
		cin >> p[i];
	}
	q = &symbs[size - 1];
	cout << "Между первым и последним элементами " << q - p << " позиций\n";

	cout << "Элементы массива\n| ";
	for (k = 0; k < size; k++) {
		cout << symbs[k] << " | ";
	}
	cout << "\nЭлементы в обратном порядке\n| ";
	for (k = 0; k < size; k++) {
		cout << q[-k] << " | ";
	}
	cout << endl;



	system("pause>nul");
	return 0;
}