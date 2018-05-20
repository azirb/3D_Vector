#pragma once
#include <string>
class TreeD_Vector
{
private :
	double x; // coordinate x , y ,z 
	double y; 
	double z; 
	double lenght; // lenght of vector 
	int    direc; // direction can be 1 or 0 
	//direction is relative to the center of the vector  if 1 is right(up) for center 0 is left (down) for center
public : 
	// set and get functions 
	void    set_x(double); 
	void    set_y(double);
	void    set_z(double);
	void    set_xyz(double, double, double); 
	void    set_Lenght();
	void    set_direc(int); 
	double  get_x(); 
	double  get_y();
	double  get_z();
	double  get_Lenght();
	int     get_Int_direc(); 
	// metods 
    void 	add  (TreeD_Vector); 
	void    minus(TreeD_Vector); 
	double  scaral_multi(TreeD_Vector); 
	void    multi(double);  
	bool    equal_vectors(TreeD_Vector);  // how to take the direction ?
	bool    equal_Lenght(TreeD_Vector); 
	// constructors 
	TreeD_Vector(); // deafult 
	TreeD_Vector(double,double,double); // initialization  
	TreeD_Vector(const TreeD_Vector &c); // copy
	~TreeD_Vector(); //destructor 
	// overload operators 
	TreeD_Vector operator =  (const double &c);
	TreeD_Vector operator =  (const TreeD_Vector &c);
	TreeD_Vector operator +  (const TreeD_Vector &c);
	TreeD_Vector operator -  (const TreeD_Vector &c);
	TreeD_Vector operator *  (const double &c);
	double       operator *  (const TreeD_Vector &c);
	bool         operator == (const TreeD_Vector &c); 
	bool         operator != (const TreeD_Vector &c);
	bool         operator >  (const TreeD_Vector &c);
	bool         operator <  (const TreeD_Vector &c);
	// print all info about obj 
    void 	printAll(); 
};