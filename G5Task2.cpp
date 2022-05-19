#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <math.h>

using namespace std;
class complex
{
public:
	double real;
	double imag;

	void showALL()
	{
		cout << "Действительная часть: " << real << endl;
		cout << "Мнимая часть: " << imag<<'i'<< endl;
		
		if (imag>0)
		{
			cout << "Комплексное число " << real <<'+' << imag << 'i' << endl;
		}
		else cout << "Комплексное число " << real << imag << 'i' << endl;
	}
	void setALL(double x, double y)
	{
		real = x;
		imag = y;
	}
	complex(double x, double y)
	{
		setALL(x,y);
	}
	complex()
	{
		setALL(0, 0);
	}

	complex operator+(complex obj)
	{
		complex tmp;
		tmp.real = real + obj.real;
		tmp.imag = imag + obj.imag;
		return tmp;
	}

	complex operator-(complex obj)
	{
		complex tmp;
		tmp.real = real - obj.real;
		tmp.imag = imag - obj.imag;
		return tmp;
	}

	complex operator*(complex obj)
	{
		complex tmp;
		tmp.real = (real * obj.real)-(imag * obj.imag);
		tmp.imag = (imag* obj.real)+(real*obj.imag);
		return tmp;
	}

	complex operator/(complex obj)
	{
		complex tmp;
		tmp.real = (real*obj.real + imag * obj.imag) / ((pow(obj.real, 2)) + (pow(obj.imag, 2)));
		tmp.imag = (imag*obj.real-real*obj.imag)/((pow(obj.real,2)) + (pow(obj.imag,2)));
		return tmp;
	}
};

class trig : public complex
{
public:

	void showALL()
	{
		cout << "Действительная часть: " << real << endl;
		cout << "Мнимая часть: " << imag << 'i' << endl;

		if (imag > 0)
		{
			cout << "Комплексное число " << real << '+' << imag << 'i' << endl;
		}
		else cout << "Комплексное число " << real << imag << 'i' << endl;
		cout << "Тригонометрическая форма "  << modul() <<"*cos("<<cosinus()<<")+i" << "*sin(" << sinus()<<')' << endl;
	}
	void setALL(double x, double y)
	{
		complex::setALL(x, y);
		real = x;
		imag = y;
	}
	double modul()
	{
		double m = 0;
		m = sqrt(pow(real, 2) + pow(imag, 2));
		return m;

	}
	double sinus()
	{
		double s = 0;
		s = asin(imag / modul());
		return s;
	}
	double cosinus()
	{
		double c = 0;
		c = (-1)* acos(real / modul());
		return c;
	}
	trig(double x, double y)
	{
		setALL(x, y);
	}
	trig()
	{
		setALL(0, 0);
	}
	trig operator+(trig obj)
	{
		trig tmp;
		tmp.real = real + obj.real;
		tmp.imag = imag + obj.imag;
		return tmp;
	}
	trig operator-(trig obj)
	{
		trig tmp;
		tmp.real = real - obj.real;
		tmp.imag = imag - obj.imag;
		return tmp;
	}
	trig operator*(trig obj)
	{
		trig tmp;
		tmp.real = (real * obj.real) - (imag * obj.imag);
		tmp.imag = (imag* obj.real) + (real*obj.imag);
		return tmp;
	}
	trig operator/(trig obj)
	{
		trig tmp;
		tmp.real = (real*obj.real + imag * obj.imag) / ((pow(obj.real, 2)) + (pow(obj.imag, 2)));
		tmp.imag = (imag*obj.real - real * obj.imag) / ((pow(obj.real, 2)) + (pow(obj.imag, 2)));
		return tmp;
	}
};














int main()
{
	double r, i,r1,i1;
	int op;
	system("chcp 1251>nul");
	cout<<"Введите действительную часть комплексного числа: " << endl;
	cin >> r;
	cout << "Введите мнимую часть комплексного числа: " << endl;
	cin >> i;
	trig a(r, i);
	a.showALL();
	cout << endl;
	
	cout << "Введите действительную часть второго комплексного числа: " << endl;
	cin >> r1;
	cout << "Введите мнимую часть второго комплексного числа: " << endl;
	cin >> i1;
	trig a1(r1, i1);
	a1.showALL();
	cout << endl;
	cout << "Введите математическую операцию, которую хотите совершить с комплексными числами(+(1),-(2),*(3),/(4)): " << endl;
	cin >> op;
	if (op == 1)
	{
		trig sum ;
		sum = a + a1;
		sum.showALL();
		cout << endl;
	}
	if (op == 2)
	{
		trig sum;
		sum = a - a1;
		sum.showALL();
		cout << endl;
	}
	if (op == 3)
	{
		trig sum;
		sum = a * a1;
		sum.showALL();
		cout << endl;
	}
	if (op == 4)
	{
		trig sum;
		sum = a / a1;
		sum.showALL();
		cout << endl;
	}






	system("pause>nul");
	return 0;
}