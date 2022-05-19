#include <cstdlib>
#include <iostream>
#include <valarray>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	valarray<int> fibs(n);
	fibs[0] = 1;
	fibs[1] = 1;
	cout << fibs[0] << " " << fibs[1];
	for (int i = 2; i < n; ++i)
	{
		fibs[i] = fibs[i - 1] + fibs[i - 2];
		cout << " " << fibs[i];
	}
	cout << endl;
	system("pause>nul");
	return 0;
}