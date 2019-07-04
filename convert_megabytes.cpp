#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(0, "Russian");
	
	const int Size = 1024;

	int Gb;
	int Mb;
	int Kb;
	int b;
	 
	cout << "Введите кол-то гигабайтов";
	cin >> Gb;

	 Mb = Gb * Size;
	 Kb = Mb * Size;
	 b = Kb * Size;

	 cout << "Мегабайт:\t" << Mb << endl;
	 cout << "Гигабайт:\t" << Gb << endl;
	 cout << "Килобайт:\t" << Kb << endl;
	 cout << "байт:\t" << b << endl;
		
	 
	 _getch();
	return(0);
}