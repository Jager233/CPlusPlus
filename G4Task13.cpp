#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstring>
const int n=1000, m = 1000;
using namespace std;
char txt(char a[n][m],int cnt)
{
	int p = 0;
	p = strlen(a[0]);
	for (int i = 0; i < cnt; ++i)
	{
			if (strlen(a[i]) > p)
			{
				p = strlen(a[i]);
			}	
	}
	return p;
}
int main() {
	system("chcp 1251>nul");
	char a[n][m];
	int p = 0;
	int cnt = 0;// счетчик количества слов
	cout << "Input text (ctrl z at the last string): ";
	while (cin >> a[cnt++]) // ввод закончится когда введете ^z (ctrl z)
		; // пустой оператор
	cnt--; //последняя строка не в счет
	cout << "cnt= " << cnt << endl;
	for (int i = 0; i < cnt; i++)
	{
		cout << a[i] << " " << strlen(a[i]) << endl;
	}
	p = txt(a, cnt);
	cout << "Длина самого длинного словечечка является такой вот  " << p;
	system("pause>nul");
	return 0;
}



















