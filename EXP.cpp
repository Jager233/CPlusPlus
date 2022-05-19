#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
long double fact(long double N)
{
	long double F = 1;

	for (int i = 1; i <= N; ++i)
	{
		F *= i; // Эквивалент F = F*i;
	}
	return F; // Возвращаем ответ
	{
		long double F = 1;

		for (int i = 1; i <= N; ++i)
		{
			F *= i; // Эквивалент F = F*i;
		}
		return F; // Возвращаем ответ
	}
}

int main()
{
	system("chcp 1251>nul");
	long double n;

	long double e=0;



	cout << "Введите кол-во знаков после запятой дял вычисления экспоненты " << endl;
	cin >> n;
	cout << endl;
	for (long double i = 0; i < n; ++i)
	{
		e +=  (1 / fact(i));
	}
 printf("ЙИКСУПНИНТА ранвана e = %.500f", e);
	system("pause>nul");
	return 0;
}