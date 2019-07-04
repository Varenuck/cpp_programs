#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	unsigned int a;
	cout << "введите сколько надо строчек:";
	if (!(cin >> a))
	{
		cout << "Problems";
		_getch();
		return(-1);
	
	}
	
	for (int j = 1; j <= a; j++)
	{
		for (int p = 1; p <= j; p++)
		cout << "*";
		cout << endl;
	
	}








	_getch();
	return(0);
}