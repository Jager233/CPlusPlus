#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
double mean(double* m, int n)
{
	double s = 0;
	for (int k = 0; k < n; ++k)
	{
		s += m[k];
	}
	return s / n;
}
int main()
{
	system("chcp 1251>nul");
	double A[] = { 1,3,8,-2,4 };
	double B[] = { 4,6,2 };
	cout << "Среднее по массиву A: " << mean(A, 5) << endl;
	cout << "Среднее по массиву B: " << mean(B, 3) << endl;
	system("pause>nul");
	return 0;
}

