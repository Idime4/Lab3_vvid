// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.

/*
Идимечев Иван, группа КИ17-16Б
Вариант 6

Определить силу притяжения F между телами с массами m1 и m2, находящимися на
расстоянии r друг от друга.
*/



#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double m1, m2, F, r;
	double const G = 6.61 * pow(10, -11);
	
	cout << "Vvedite massu pervogo tela, nazhmite Enter" << endl;
	cin >> m1;
	
	while (m1 <= 0 || cin.fail())
	{
		cout << "Oshibka vvoda. Vvedite korrektnuyu massu" << endl;
		cin.clear();
		cin.ignore(cin.rdbuf() -> in_avail());
		cin >> m1;
	}
	
	cout << "Vvedite massu vtorogo tela, nazhmite Enter" << endl;
	cin >> m2;
	
	while (m2 <= 0 || cin.fail())
	{
		cout << "Oshibka vvoda. Vvedite korrektnuyu massu" << endl;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cin >> m2;
	}
		
	cout << "Vvedite rasstoyanie mezhdu telami, nazhmite Enter" << endl;
	cin >> r;
	
	while (r <= 0 || cin.fail())
	{
		cout << "Oshibka vvoda. Vvedite korrektnoe rasstoyanie" << endl;
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		cin >> r;
	}
	
	F = G * m1 * m2 / (r * r);
	
	cout << "Sila prityazheniya mezhdu telami F= " << F << endl;
    return 0;
}

