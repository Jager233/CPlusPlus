#include "pch.h"
#include <cstdlib>
#include <iostream>
using namespace std;
const int n = 5;
class Num
{
public:

double	nums[n];
 Num (double p = 0)
{
	for (int k = 0; k < n; ++k)
	{

		nums[k] = p;
	}
}
 Num(double* b)
 {
	 for (int k = 0; k < n; ++k)
	 {
		nums[k] = b[k];
	 }
 }
 Num(double x,Num obj)
 {
	 for (int i = 1; i < n; i++)
	 {
		 nums[i] = obj.nums[i];
	 }
	 nums[0] = x;
 }

void show()
 {
	for (int i = 0; i < n; i++)
	{
		cout << " " << nums[i];
	}
 }
Num operator*(double a)
{
	Num t;
	for (int i = 0; i < n; i++)
	{
		t.nums[i] = nums[i] * a;
	}
	return t;
}
void setALL(double a)
{
	for (int i = 0; i < n; i++)
	{
		nums[i] = nums[i] + a;
	}
}


};

Num operator+(Num objX,Num objY)
{
	Num tmp;
	for (int i = 0; i < n; i++)
	{
		tmp.nums[i] = (objX.nums[i] + objY.nums[i]) / 2;
	}
	return tmp;
}

int main()
{
	system("chcp 1251>nul");
	srand(3);
	double a[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
	}
	Num   C(a),B(2, C);
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	Num A(a);
	A.show();
	cout << endl;
	B.show();
	cout << endl;
	C.show();
	cout << endl;
	Num D;
	D = A + B;
	D.show();
	cout << endl;
	system("pause>nul");
	return 0;
}
