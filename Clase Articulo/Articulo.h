#pragma once
#include<iostream>
using namespace std;

class Articulo
{
private:
	int clave;
	string nombre;
	float precio;
	float cantidad;

public:

	Articulo(int c, string n, float p,float cat);
	void setprecio(float p);
	void setcantidad(float c);
	float getprecio();
	float getcantidad();
	float total(float cantidad, float precio);
	Articulo();


};



