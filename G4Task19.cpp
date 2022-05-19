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
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == b)
			{
				++t;
			}
		}
	}
	return t;
}
int main() {
	system("chcp 1251>nul");
	srand(2);
	char a[n][m];
	char b = 'б';
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = (char)('а' + rand()%12);
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl << "Символ а встречается раз " << txt(a, b) << endl;
	system("pause>nul");
	return 0;
}
