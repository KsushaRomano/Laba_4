// Laba_4_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, X, Y, st;
	cout << "Введите X кг конфет: ";
	cin >> X;
	cout << "Введите стоимость X кг конфет: ";
	cin >> A;
	st = A / X;
	cout << "Стоимость 1 кг конфет равна " << st << " рублей" << endl;
	cout << "Введите Y кг конфет: ";
	cin >> Y;
	st = st * Y;
	cout << "Стоимость Y кг конфет равна " << st << " рублей";
}
