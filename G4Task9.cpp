#include <cmath>
#include <cstdlib>
#include "pch.h"
#include <iostream>
using namespace std;
const double h = 0.000001;
const int n = 5;
void show(double a[n])
{
	for (int i = 0; i < n; ++i)
	{
		cout << " " << a[i] << endl;
	}
}
double ff(double x)
{
		return sqrt(9 * pow(x, 3) - 12 * x + 5);
}
double dif(double* f, double x)
{
	double f1 = 0;
	f1 = (ff(x + h) - ff(x)) / h;
	return f1;
}
double dif(double* f, double m[n],double mres[n])
{
	for (int i = 0; i < n; ++i)
	{
		mres[i] = (ff(m[i] + h) - ff(m[i])) / h;
	}
	return mres[n];
}
int main()
{
	double x, res = 0,per,perp,vub;
	double a[n];
	double mres[n];
	for (int i = 0; i < n; ++i)
	{
		mres[i] = 0;
	}
	system("chcp 1251>nul");
	cout << "Если хотите посчитать одну точку введите 1, введите 0 если хотите много точек" << endl;
	cin >> vub;
	if (vub == 1)
	{
		cout << "Введите точку в которой будет вычисляться производная ф-и f(x): " << endl;
		cin >> x;
		double* p;
		per = ff(x);
		p = &per;
		res = dif(p, x);
		cout << "Производная равна " << res << endl;
	}
	else if (vub == 0)
	{
		for (int i = 0; i < n; ++i)
		{
			cout << "Введите через ентер точки" << endl;
			cin >> a[i];
			double* q;
			perp = ff(a[i]);
			q = &per;
			dif(q, a, mres);
		}
		cout << "Точки " << endl;
		show(a);
		cout << endl << "Производные в соответствующих точках равны" << endl;
		show(mres);
	}
	system("pause>nul");
	return 0;
}
