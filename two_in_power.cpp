#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
	setlocale(0, "Russian");
	int n;
	int resurt = 1;
	cout << "—к маЇ бути стовпчикiв:\n" << endl;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		resurt *= 2;
		cout << "2 в " << i << " степенi: " << resurt << endl;
	}





	_getch();
	return(0);
}