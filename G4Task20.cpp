#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstring>
const int  n = 10, m = 10;
using namespace std;
int txt(char a[n][m], char b)
{
	int t = 0;
	for (int i = 0; i < n; ++i)
	{
		
			if (a[i][0] == b)
			{
				++t;
			}
	}
	return t;
}
int main() {
	system("chcp 1251>nul");
	srand(3);
	char a[n][m];
	char b = 'а';
	for (int i = 0; i < n; ++i)
	{
		{
			a[i][0] = (char)('а' + rand() % 12);
			cout << a[i][0] << ' ';
		}
		cout << endl;
	}
	cout << endl << "Символ а встречается раз " << txt(a, b) << endl;
	system("pause>nul");
	return 0;
}
