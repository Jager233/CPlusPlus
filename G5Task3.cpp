#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <math.h>
using namespace std;

class vector2D
{
public:
	double x, y;

	void showALL()
	{
		cout << "Координата X: " << x << endl;
		cout << "Координата Y: " << y << endl;

	}

	void setALL(double X,double Y)
	{
		x = X;
		y = Y;

	}
	vector2D(double x, double y)
	{
		setALL(x, y);
	}
	vector2D()
	{
		setALL(0, 0);
	}

	vector2D operator+(vector2D obj)
	{
		vector2D tmp;
		tmp.x = x + obj.x;
		tmp.y = y + obj.y;
		return tmp;
	}

	vector2D operator-(vector2D obj)
	{
		vector2D tmp;
		tmp.x = x - obj.x;
		tmp.y = y - obj.y;
		return tmp;
	}

	vector2D operator*(vector2D obj)
	{
		vector2D tmp;
		tmp.x = x * obj.x;
		tmp.y = y * obj.y;
		return tmp;
	}

	vector2D operator*(double k)
	{
		vector2D tmp;
		tmp.x = x * k;
		tmp.y = y * k;
		return tmp;
	}

	vector2D operator/(double k)
	{
		vector2D tmp;
		tmp.x = x * k;
		tmp.y = y * k;
		return tmp;
	}
};


class vector3D :public vector2D
{
public:
	double z;
	void showALL()
	{
		cout << "Координата X: " << x << endl;
		cout << "Координата Y: " << y << endl;
		cout << "Координата Z: " << z << endl;
	}

	void setALL(double X, double Y,double Z)
	{
		x = X;
		y = Y;
		z = Z;
	}

	vector3D(double x, double y,double z)
	{
		setALL(x, y,z);
	}
	vector3D()
	{
		setALL(0, 0,0);
	}
	 
	vector3D operator+(vector3D obj)
	{
		vector3D tmp;
		tmp.x = x + obj.x;
		tmp.y = y + obj.y;
		tmp.z = z + obj.z;
		return tmp;
	}

	vector3D operator-(vector3D obj)
	{
		vector3D tmp;
		tmp.x = x - obj.x;
		tmp.y = y - obj.y;
		tmp.z = z - obj.z;
		return tmp;
	}

	vector3D operator*(vector3D obj)
	{
		vector3D tmp;
		tmp.x = x * obj.x;
		tmp.y = y * obj.y;
		tmp.z = z * obj.z;
		return tmp;
	}

	vector3D operator*(double k)
	{
		vector3D tmp;
		tmp.x = x * k;
		tmp.z = z * k;
		tmp.y = y * k;
		return tmp;
	}

	vector3D operator/(double k)
	{
		vector3D tmp;
		tmp.x = x / k;
		tmp.y = y / k;
		tmp.z = z / k;
		return tmp;
	}














};


















int main()
{
	double x, y, x1, y1,z,z1,k;
	int op;
	system("chcp 1251>nul");
	cout << "Введите координату X первого вектора: " << endl;
	cin >> x;
	cout << "Введите координату Y первого вектора: " << endl;
	cin >> y;
	cout << "Введите координату Z первого вектора: " << endl;
	cin >> z;
	cout << endl;
	vector3D A(x, y,z);
	cout << "Первый вектор " << endl;
	A.showALL();
	cout << endl;
	cout << "Введите координату X второго вектора: " << endl;
	cin >> x1;
	cout << "Введите координату Y второго вектора: " << endl;
	cin >> y1;
	cout << "Введите координату Z второго вектора: " << endl;
	cin >> z1;
	cout<< endl;
	vector3D B(x1, y1,z1);
	cout << "Второй вектор " << endl;
	B.showALL();
	cout << endl;
	cout << "Выбирете операцию, которую нужно произвести с векторами  СЛОЖЕНИЕ(нажмите 1) ВЫЧИТАНИЕ(2)  УМНОЖЕНИЕ НА ЧИСЛО 1 вект(4)" << endl;
		cout<<"ДЕЛЕНИЕ НА ЧИСЛО(3)    СКАЛЯРНОЕ ПРОИЗВЕДЕНИЕ(5) " << endl;
	cin >> op;

	if (op == 1)
	{
		vector3D sum;
		sum = A + B;
		sum.showALL();
		cout << endl;
	}
	if (op == 2)
	{
		vector3D sum;
		sum = A - B;
		sum.showALL();
		cout << endl;
	}
	if (op == 5)
	{
		vector3D sum;
		sum = A * B;
		sum.showALL();
		cout << endl;
	}
	if (op == 4)
	{
		cout << "Введите число на которое умножается вектор: " << endl;
		cin >> k;
		cout<< endl;
		vector3D sum;
		sum = A *k;
		sum.showALL();
		cout << endl;
	}

	if (op == 3)
	{
		cout << "Введите число на которое делится вектор: " << endl;
		cin >> k;
		cout << endl;
		vector3D sum;
		sum = A / k;
		sum.showALL();
		cout << endl;
	}



	system("pause>nul");
	return 0;
}
