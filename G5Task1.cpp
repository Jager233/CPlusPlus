#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
class paralel
{
public:
	double width;
	double height;
	double lenght;
	double volume()
	{
		double s =0;
			s = width * height*lenght;
		return s;
	}
	void showALL()
	{
		cout << "Длина: " << lenght << endl;
		cout << "Высота: " << height << endl;
		cout << "Ширина: " << width << endl;
		cout << "Объём: " << volume() << endl;
	}
	void setALL( double b, double c, double a)
	{
		    width = b;
			lenght = a;
			height = c;
	}
	paralel(double b, double c, double a)
	{
		setALL(b, c, a);
	}
	paralel()
	{
		setALL(0, 0, 0);
	}
};
class wParalel : public paralel
{
public:
	double weight;
	double V = volume();
void showALL()
{
	cout << "Длина: " << lenght << endl;
	cout << "Высота: " << height << endl;
	cout << "Ширина: " << width << endl;
	cout << "Объём: " << V << endl;
	cout << "Масса: " << weight << endl;
	cout << "Плотность: " << density() << endl;
}
void setALL(double b, double c, double a,double m,double v)
{
	paralel::setALL(b, c, a);
	weight = m;
	V = v;
}
wParalel(double b, double c, double a, double m = 1,double v=1) :paralel(b, c, a)
{
	weight = m;
	V = v;

}
wParalel() :paralel()
{
	weight = 1;
	V = volume();
}

double density()
{
	double d = 0;
 d = weight/(width * height*lenght);
 return d;
}
wParalel operator+(wParalel obj)
{
	wParalel tmp;
	tmp.V = (width * height*lenght) + (obj.width * obj.height*obj.lenght);
	tmp.weight = weight + obj.weight;
	tmp.lenght = (lenght + obj.lenght) / 2;
	tmp.width = (width + obj.width) / 2;
	tmp.height = (height + obj.height) / 2;
	return tmp;
}
};

int main()
{
	double a, b, c, m, a1, b1, c1, m1;
	system("chcp 1251>nul");
	cout << "Введите через ентер ширину,высоту,длину и массу первого парапелипеда: " << endl;
	cin >> b;
	cin >> c;
	cin >> a;
	cin >> m;	
	cout << "Введите через ентер ширину,высоту,длину и массу второго следующего другогого парапелипеда: " << endl;
	cin >> b1;
	cin >> c1;
	cin >> a1;
	cin >> m1;
	wParalel sum;
	paralel first(5, 6, 7);
	paralel second(1, 3, 2);
	wParalel third(b, c, a, m);
	wParalel fourth(1, 2, 3, 4);
	wParalel pird(b1, c1, a1, m1);
	sum = pird+third  ;
	first.showALL();
	cout << endl;
	second.showALL();
	cout << endl;
	third.showALL();
	cout << endl;
	fourth.showALL();
	cout << endl;
	cout << "Парапапалелиддиед полученный слложением двух других иных первых первого и второго являет собой и представляет " << endl;
	sum.showALL();
	system("pause>nul");
	return 0;
}