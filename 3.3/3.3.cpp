// Lab_03_3.cpp
// < Сенишин Михайло >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, R, y; // вхідний аргумент, параметр, результат виразу
	
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -8 - R)
		y = R;
	else
		if (-8 - R < x && x < -8 + R)
			y = sqrt(2 * pow(R, 2) - pow(x, 2) - 16 * x - 64);
		else
			if (-8 + R < x && x <= -4)
				y = R;
			else
				if (-4 < x && x <= 2)
					y = R - (1 + R) / 6 * (x + 4);
				else
					y = x-3;
	
	cout << endl;
	cout << "y = " << y << endl;
	
	cin.get();
	return 0;
}