

#include "pch.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
class MyWords 
{
public:
	string word;
	bool state;
	MyWords()
	{
		word = "";
		state = true;
	}
	void read()
	{
		cout << word << " ";
		if (state)
		{
			(this + 1)->read();
		}
	}
};


int main()
{
	system("chcp 1251>nul");
	const int n= 5;
	string numbers[n] = { "один","два","три","четыре","пять" };
	MyWords words[n];
	words[n - 1].state = false;
	for (int k = 0; k < n; ++k)
	{
		words[k].word = numbers[k];
	}
	words[0].read();
	cout << endl;
	words[2].read();
	cout << endl;

	system("pause>nul");
	return 0;
}
