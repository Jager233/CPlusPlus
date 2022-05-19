#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	const int n = 100, m = 100;
	system("chcp 1251>nul");
	char a[n][m];
	cout << "Input text (ctrl z at the last string): ";
	int cnt = 0;// счетчик количества слов
	while (cin >> a[cnt++]) // ввод закончится когда введете ^z (ctrl z)
		; // пустой оператор
	cnt--; //последняя строка не в счет
	cout << "cnt= " << cnt << endl;
	for (int i = 0; i < cnt; i++)
		cout << a[i] << " " << strlen(a[i]) << endl;
	system("pause>nul");
	return 0;
}