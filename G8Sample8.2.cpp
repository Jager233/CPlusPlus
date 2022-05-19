#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
template<class A, class B> struct MyStruct
{
	A first;
	B second;
};
template<class A, class B> void show(MyStruct<A, B> str)
{
	cout << "Первое поле: " << str.first << endl;
	cout << "Второе поле: " << str.second << endl;
}
int main()
{
	system("chcp 1251>nul");
	MyStruct<int, char> strA = { 100,'A' };
	MyStruct<double, string> strB = { 2.5,"текст" };
	show(strA);
	show(strB);
	system("pause>nul");
	return 0;
}