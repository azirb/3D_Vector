#include "3D_Vector.h"
#include <clocale>
#include <iostream>
using namespace std; 

int main()
{
	setlocale(LC_ALL, "Russian"); 
	int x; 
	cout << "1)������������ �������" << endl; 
	cout << "2) ������������ ���������  ";
	cin >> x; 

	if (x == 1)
	{
		//using functions 
		double _x, _y, _z;

		TreeD_Vector a, b;

		cout << "������� ���������� x  ";
		cin >> _x;

		cout << "������� ���������� y  ";
		cin >> _y;

		cout << "������� ���������� z  ";
		cin >> _z;

		a.set_xyz(_x, _y, _z);
		a.set_Lenght();

		_x += 2;
		_y += 2;
		_z += 2;

		b.set_xyz(_x, _y, _z);
		b.set_Lenght();

		a.printAll();

		b.printAll();

		if (a.equal_Lenght(b) == true)
		{
			cout << "������ ����� " << endl;
		}
		else
		{
			cout << "������ �� ����� " << endl;
		} 


		a.add(b);
		a.set_Lenght();
		a.printAll();

		a.minus(b);
		a.set_Lenght();
		a.printAll();

		double temp = a.scaral_multi(b);
		cout << "��������� ������������ " << temp << endl;

		cout << "������� ����� ��� ��������� �� ������ ";
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

		cout << "������� ���������� x ";
		cin >> x;

		cout << "������� ���������� y ";
		cin >> y;

		cout << "������� ���������� z ";
		cin >> z;

		TreeD_Vector g(x, y, z);

		x += 2;
		y += 2;
		z += 2;

		TreeD_Vector k(x, y, z);

		g.set_Lenght();
		k.set_Lenght();
		g.printAll();
		k.printAll();

		if (g == k)
		{
			cout << "������ ����� " << endl;
		}
		else
		{
			if (g > k)
			{
				cout << "������ � ������ " << endl;
			}
			else
			{
				cout << "������ b ������ " << endl;
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
		cout << "��������� ������������ " << _temp << endl;
		cout << "������� ����� ��� ��������� �� ������ ";
		cin >> _temp;

		c = c * _temp;
		c.set_Lenght();
		c.printAll();

		
		system("pause");
		return 0; 
	}
}