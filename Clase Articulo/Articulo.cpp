#include "Articulo.h"


Articulo::Articulo() 
{

	setprecio(0);
	setcantidad(0);

}
Articulo::Articulo(int c, string n, float p, float cat) {
	clave = c;
	nombre = n;
	precio = p;
	cantidad = cat;

}

void Articulo::setprecio(float p) {
	precio = p;
}

void Articulo::setcantidad(float c) {
	cantidad = c;
}

float Articulo::getprecio() {

	return precio;
}

float Articulo::getcantidad() {
	return cantidad;
}

float Articulo::total(float cantidad, float precio) {

	return cantidad * precio;
}