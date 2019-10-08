// Laba_4_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#define _USE_MATH_DEFINES
#include <Math.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, rad;
	cout << "Введите значение угла a в градусах: ";
	cin >> a;
	rad = (a * M_PI) / 180;
	cout << "Угол a в радианах равен: " << rad;
}