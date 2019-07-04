#include <conio.h>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	setlocale(0, "Russian");
	double h, m, BMI;
	cout << "введiть свiй рiст в метрах:\n" << endl;
	cin >> h;
	cout << "введiть свою масу в кг:\n" << endl;
	cin >> m;
	BMI = m / (h*h);
	cout << "Ваш BMI: " << BMI << endl;
	if (BMI <= 18.5)
	{
		cout << "Недостатьня маса\n" << endl;
	}
	else
		if (BMI <= 25)
			cout << " Норма\n" << endl;
		else
			cout << "У вас ожирiння\n" << endl;

	_getch();
	return(0);
}