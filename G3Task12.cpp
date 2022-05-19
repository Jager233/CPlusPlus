#include <cstdlib>
#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;
const int n = 4,m=3,l=2;
int s = 0;
void showA(int M[m][n])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			printf("%4d", M[i][j]);
		}
		printf("\n");
	}
}
void showB(int M[n][l])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++) {
			printf("%4d", M[i][j]);
		}
		printf("\n");
	}
}
void showC(int M[m][l])
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < l; j++) {
			printf("%4d", M[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	system("chcp 1251>nul");
	srand(3);
	int A[m][n];
	int B[n][l];
	int C[m][l];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			A[i][j] = rand() % 10;
		}
	}
	printf("Матрица A:\n");
	showA(A);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l; j++) {
			B[i][j] = rand() % 10;
		}
	}
	printf("Матрица B:\n");
	showB(B);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			C[i][j] = 0;
			for (int k = 0; k < n; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("Матрица C=A*B:\n");
	showC(C);
	system("pause>nul");
	return 0;
}



