#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B, x;
	cout << "Введите значение А: ";
	cin >> A;
	cout << "Введите значение В: ";
	cin >> B;
	if (A != 0) {
		x = (-B) / A;
		cout << "Значение x равно: " << x;
	}
	else { cout << "Неверное значение A"; };
}