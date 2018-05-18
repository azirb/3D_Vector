#pragma once
class TreeD_Vector
{
private :
	double x; // coordinate x , y ,z 
	double y; 
	double z; 
	double lenght; // lenght of vector 
public : 
	// set and get functions 
	void    set_x(double); 
	void    set_y(double);
	void    set_z(double);
	void    set_xyz(double, double, double); 
	void    set_Lenght();
	double  get_x(); 
	double  get_y();
	double  get_z();
	double  get_Lenght(); 
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
	double       operator *  (const TreeD_Vector &c);
	TreeD_Vector operator *  (const double &c);
	bool         operator == (const TreeD_Vector &c); 
	bool         operator != (const TreeD_Vector &c);
	bool         operator >  (const TreeD_Vector &c);
	bool         operator <  (const TreeD_Vector &c);
	// print all info about obj 
    void 	printAll(); 
};