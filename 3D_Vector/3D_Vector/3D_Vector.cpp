#include "3D_Vector.h"
#include <cmath>
#include <iostream>
using namespace std; 

// set and get 
void TreeD_Vector :: set_x (double _x)
{
	x = _x; 
}

void TreeD_Vector :: set_y (double _y)
{
	y = _y;
}

void TreeD_Vector :: set_z(double _z)
{
	z = _z;
}

void TreeD_Vector::set_xyz(double _x, double _y, double _z)
{
	x = _x; 
	y = _y; 
	z = _z; 
}

void TreeD_Vector::set_Lenght()
{
	lenght=sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

void TreeD_Vector::set_direc(int _dir)
{
	error404:
	if (_dir == 0 || _dir == 1)
	{
		direc = _dir; 
	}
	else
	{
		cout << "Error 404 Направление может быть 1 или 0 " << endl; 
		cout << "Retry pls"; 
		cout << "Введите напрвление снова"; 
		cin >> _dir; 
		goto error404; 
	}
}

double TreeD_Vector :: get_x()
{
	return x; 
}

double TreeD_Vector::get_y()
{
	return y;
}

double TreeD_Vector::get_z()
{
	return z;
}

double  TreeD_Vector :: get_Lenght()
{
	return lenght; 
}

int TreeD_Vector:: get_Int_direc()
{
	return direc; 
}

// metods 
void TreeD_Vector::add(TreeD_Vector _c)
{
	_c.x += x; 
	_c.y += y;
	_c.z += z;
}

void TreeD_Vector::minus(TreeD_Vector _c)
{
	_c.x -= x;
	_c.y -= y;
	_c.z -= z;
}

double TreeD_Vector::scaral_multi(TreeD_Vector _c)
{
	return _c.x*x + _c.y*y + _c.z*z; 
}

void  TreeD_Vector::multi(double _lambda)
{
	x *= _lambda;
	y *= _lambda;
	z *= _lambda;
}

bool TreeD_Vector :: equal_Lenght(TreeD_Vector _c)
{
	return _c.lenght == lenght; 
}

bool TreeD_Vector::equal_vectors(TreeD_Vector _c)
{
	if (equal_Lenght(_c) && direc == _c.direc)
	{
		return true;
	}
	else
		return false; 
}

// constructors 
TreeD_Vector :: TreeD_Vector  () {};
TreeD_Vector :: ~TreeD_Vector () {};

TreeD_Vector :: TreeD_Vector  (double _x, double _y, double _z) 
{
	x = _x; 
	y = _y; 
	z = _z; 
}

TreeD_Vector::TreeD_Vector(const TreeD_Vector &c)
{
	x = c.x; 
	y = c.y; 
	z = c.z; 
}

// overload operators 
TreeD_Vector TreeD_Vector :: operator =  (const TreeD_Vector &c)
{
	x = c.x; 
	y = c.y; 
	z = c.z; 
	lenght = c.lenght; 
	return *this;
}

TreeD_Vector TreeD_Vector  :: operator =  (const double &c)
{
	lenght = c; 
	return *this; 
}

TreeD_Vector TreeD_Vector  :: operator +  (const TreeD_Vector &c)
{
	return TreeD_Vector( c.x + x, y + c.y, z + c.z); 
}

TreeD_Vector TreeD_Vector  :: operator -  (const TreeD_Vector &c)
{
	return TreeD_Vector(c.x + x, y + c.y, z + c.z);
}

double  TreeD_Vector  :: operator *  (const TreeD_Vector &c)
{
	return c.x*x + c.y*y + c.z*z;
}

TreeD_Vector TreeD_Vector  :: operator *  (const double &c)
{
	return TreeD_Vector(c*x, c*y, c*z);
}

bool  TreeD_Vector  ::  operator == (const TreeD_Vector &c)
{
    if (equal_Lenght(c) && direc == c.direc)
	{
		return true;
	}
	else
		return false; 
}
bool  TreeD_Vector  ::  operator != (const TreeD_Vector &c)
{
	return lenght != c.lenght;
}
bool  TreeD_Vector  ::  operator >  (const TreeD_Vector &c)
{
	return lenght > c.lenght;
}
bool  TreeD_Vector  ::  operator <  (const TreeD_Vector &c)
{
	return lenght <  c.lenght;
}

// print all info about obj 
void TreeD_Vector::printAll()
{
	cout << "Направление " << direc << endl; 
	cout << "Координата х = " << x << endl; 
	cout << "Координата y = " << y << endl;
	cout << "Координата z = " << z << endl;
	cout << "Длинна вектора = " << lenght << endl;
}