#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <math.h>
using namespace std;
class car
{
public:
	string stamp, color;
	double tank, rate;

	void showALL()
	{
		cout << "Марка " << stamp << endl;
		cout << "Цвет: " << color << endl;
		cout << "Объём топливного бака " << tank << endl;
		cout << "Норма потребления: " << rate << endl;
		cout << "Расстояние, которое может пройти с полными баком: " << exp() << endl;
	}

	void setALL(string st, string col, double X, double Y)
	{
		tank = X;
		rate = Y;
		stamp = st;
		color = col;
	}

	car(string st, string col, double x, double y)
	{
		setALL(st, col,x, y);
	}
	car()
	{
		setALL(0, 0,0,0);
	}

	double exp()
	{
		double s = 0;
		s = (tank / rate) * 100;
		return s;
	}


};

class cargo :public car
{
public:
	double carrying;
	void showALL()
	{
		cout << "Марка " << stamp << endl;
		cout << "Цвет: " << color << endl;
		cout << "Объём топливного бака " << tank <<'Л'<< endl;
		cout << "Норма потребления: " << rate << 'Л' << endl;
		cout << "Расстояние, которое может пройти с полными баком: " << exp()  <<"Км"<< endl;
		cout << "Грузоподъёмность: " << carrying << endl;
		cout << "Себестоимость транспортировки 1т груза на 1 Км: " << trans() << "Руб"<< endl;
	}

	void setALL(string st, string col, double X, double Y,double ca)
	{
		car::setALL(st, col, X, Y);
		carrying = ca;
	}

	cargo(string st, string col, double x, double y, double ca):car(st,col,x,y)
	{
		carrying = ca;
	}
	cargo():car()
	{
		carrying = 1;
	}
	double trans()
	{
		double s = 0;
		s = rate/100*43.90/carrying;
		return s;
	}
	







};


















int main()
{
	double x, y, x1, y1,ca, v,v1,n;
	string c, st, c1, st1;
	int op;
	system("chcp 1251>nul");
	cout << "Введите марку автомобиля: " << endl;
	cin >> st;
	cout << "Введите цвет: " << endl;
	cin >> c;
	cout << endl;
	cout << "Введите объём бака: " << endl;
	cin >> v;
	cout << endl;
	cout << "Введите норму потребления на (100 литров): " << endl;
	cin >> n;
	cout << endl;
	cout << "Введите грузоподъёмность: " << endl;
	cin >> ca;
	cout << endl;
	cargo a(st, c, v, n,ca);
	a.showALL();















	system("pause>nul");
	return 0;
}
