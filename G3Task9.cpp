#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;
const int n=3;
int s = 0;
void show(int M[n][n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			printf("%4d", M[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	system("chcp 1251>nul");
	srand(3);
	int A[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cin >> A[i][j];
		}
	}
	printf("Матрица A:\n");
	show(A);


	system("pause>nul");
	return 0;
}