#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(0, "Russian");
	
	double C;
	double F;
	double K;
	  
	cout << "Ведите сколко градусов за цельсием: ";
	cin >> C;

	F = (C*1.8) + 32;
	K = C + 273;


	cout << "Градус по цельсию:\t" << C << endl;
	cout << "Градус по фаренгейту:\t" << F << endl;
	cout << "Градус по кельвину:\t" << K  << endl;
	 
	 _getch();
	return(0);
}