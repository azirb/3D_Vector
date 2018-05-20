#include "3D_Vector.h"
#include <clocale>
#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "Russian"); 
	int x; 
	cout << "1)Использовать функции" << endl; 
	cout << "2) Использовать операторы  ";
	cin >> x; 

	if (x == 1)
	{
		//using functions 
		double _x, _y, _z; 
			int _dir;

		TreeD_Vector a, b;

		cout << "Введите координату x  ";
		cin >> _x;

		cout << "Введите координату y  ";
		cin >> _y;

		cout << "Введите координату z  ";
		cin >> _z;

		cout << "Задайте направление 1(Вправо(вверх)) или 0(Влево(вниз))";
		cin >> _dir;

		a.set_xyz(_x, _y, _z);
		a.set_Lenght();
		a.set_direc(_dir); 

		_x += 2;
		_y += 2;
		_z += 2;

		b.set_xyz(_x, _y, _z);
		b.set_Lenght();
		b.set_direc(_dir); 

		a.printAll();

		b.printAll();

		if (a.equal_Lenght(b) == true)
		{
			cout << "Длинна равна " << endl;
		}
		else
		{
			cout << "Длинна не равна " << endl;
		} 
		
		a.add(b); 
		a.set_Lenght();
		a.printAll();

		a.minus(b);
		a.set_Lenght();
		a.printAll();

		double temp = a.scaral_multi(b);
		cout << "Скалярное произведение " << temp << endl;

		cout << "Введите число для умножения на вектор ";
		cin >> temp;

		a.multi(temp);
		a.set_Lenght();
		a.printAll();

		
		system("pause"); 
		return 0;
	}
	else
	{
		double x, y, z; 
		int dir;

		cout << "Введите координату x ";
		cin >> x;

		cout << "Введите координату y ";
		cin >> y;

		cout << "Введите координату z ";
		cin >> z;


		cout << "Задайте направление 1(Вправо(вверх)) или 0(Влево(вниз))";
		cin >> dir;

		TreeD_Vector g(x, y, z);

		x += 2;
		y += 2;
		z += 2;

		TreeD_Vector k(x, y, z);

		g.set_direc(dir);
		k.set_direc(dir);
		g.set_Lenght();
		k.set_Lenght();
		g.printAll();
		k.printAll();

		if (g == k)
		{
			cout << "Вектора равны " << endl;
		}
		else
		{
			if (g > k)
			{
				cout << "Вектор а больше " << endl;
			}
			else
			{
				cout << "Вектор b больше " << endl;
			}
		}

		TreeD_Vector c;

		c = g;
		c.set_Lenght();
		c.printAll();

		c = g + k;
		c.set_Lenght();
		c.printAll();

		c = g - k;
		c.set_Lenght();
		c.printAll();

		double _temp;

		_temp = g * k;
		cout << "Скалярное произведение " << _temp << endl;
		cout << "Введите число для умножения на вектор ";
		cin >> _temp;

		c = c * _temp;
		c.set_Lenght();
		c.printAll();

		
		system("pause");
		return 0; 
	}
}