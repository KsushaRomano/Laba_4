using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A1, A2, B1, B2, x, y, R, C1, C2;
	cout << "Введите значение А1: ";
	cin >> A1 ;
	cout << "Введите значение B1: ";
	cin >> B1 ;
	cout << "Введите значение C1: ";
	cin >> C1 ;
	cout << "Введите значение A2: ";
	cin >> A2 ;
	cout << "Введите значение B2: ";
	cin >> B2;
	cout << "Введите значение C2: ";
	cin >> C2;
	R = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / R;
	y = (A1 * C2 - A2 * C1) / R;
	cout << "Значение х равно: " << x << endl;
	cout << "Значение у равно: " << y;
}