#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;
const int n = 7;
int s = 0;
void show(int M[n][n])
{
	for (int i = 0;i<n;i++)
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
			A[i][j] = rand() % 10;
		}
	}
	printf("Матрица A:\n");
	show(A);
	for (int i = 0; i < n-1;i++)
	{
		for (int j = i; j < n; j++) {
			s = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = s;
		}
	}
	printf("Транспонированная матрица A:\n");
	show(A);

	system("pause>nul");
	return 0;
}
