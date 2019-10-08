// Laba_4_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#define _USE_MATH_DEFINES
#include <Math.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, rad;
	cout << "Введите значение угла a в радианах: ";
	cin >> a;
	rad = (a * 180) / M_PI;
	cout << "Угол a в градусах равен: " << rad;
}
