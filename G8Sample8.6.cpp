#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	srand(2);
	int n;
	cout << "Кол-во символов: ";
	cin >> n;
	vector<char> symbs(n);
	cout << "|";
	for (int k = 0; k < symbs.size(); ++k)
	{
		symbs[k] = 'A' + rand() % (n + 5);
		cout << " " << symbs[k] << " |";
	}
	cout << endl;
	system("pause>nul");
	return 0;
}