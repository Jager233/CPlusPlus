#include "pch.h"
#include <cstdlib>
#include <iostream>
using namespace std;
const int n = 5;
class a
{
	int i;
public:
	a(int);  //конструктор копирования        
	void print(); //функция вывода на экран
};

a::a(int j) : i(j) {  //инициализация через списки инициализации :) Как-то так
}

void a::print()
{
	std::cout << this->i << '\t';
}
int main()
{
	system("chcp 1251>nul");
	a* objects[10]; //массив указателей на объекты 
	for (int i = 0; i < 10; i++)
	{
		objects[i] = new a(i);   //создаем динамически объекты и присваиваем значения 
		objects[i]->print(); //выводим на экран
	}
	system("pause>nul");
	return 0;
}