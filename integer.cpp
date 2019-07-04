#include <iostream>;
#include <conio.h>;
#include <climits>; 


using std :: endl;
using std :: cout;
using std :: cin;



int main()
{
	 
	setlocale(0, "Russian");


	int a, b;
	 
	cout << "Введите целое число: " << endl;
	cin >> a;
	cout << "Введите 2 целое число: " << endl;
	cin >> b;



	cout << "a+b= " << (a + b) << endl;
	cout << "a-b= " << (a - b) << endl;
	cout << "a*b= " << (a*b) << endl;
	cout << "a/b= " << (a / b) << endl;
	cout << "a%b= " << (a%b) << endl;


	cout << "Вашы результати сверху" << endl;

	_getch();
	return(0);
}