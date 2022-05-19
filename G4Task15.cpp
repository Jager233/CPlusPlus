#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstring>
const int  n = 100;
using namespace std;
int txt(char a[n],char b)
{

	int t=0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == 'а')
		{
			++t;
		}
	}

	return t;

}

int main() {
	system("chcp 1251>nul");
	char a[n] ;
	char b = 'а';

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		cout << a[i];
	}
	cout <<endl<< "Символ а встречается раз " << endl<< txt(a, b);

	system("pause>nul");
	return 0;
}
