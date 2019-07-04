#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
	setlocale(0, "Russian");
	double a, b;
	char Operator;
	cout << "Введите число,действие,числo:" << endl;
	cin >> a >> Operator >> b;
	cout << "Результат: " << endl;
	switch (Operator)
	{
	case '+': cout << a + b << endl; break;
	case '-': cout << a - b << endl; break;
	case '/': cout << a / b<< endl; break;
	case'*': cout << a * b << endl; break;

	default: cout << "Неверная операци\n" << endl;
	}




	_getch();
	return(0);
}