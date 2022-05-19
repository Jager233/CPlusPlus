#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;
const int n = 3;
int s = 0,v=0;
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
	int diag[n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			A[i][j] = rand() % 10;
		}
	}
	printf("Матрица A:\n");
	show(A);
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) {
			if (i == j)
				diag[i] = A[i][j];
		}
		s += diag[i];
	}
	printf("След матрицы A= \n");
	printf("%5d", s);

	system("pause>nul");
	return 0;
}