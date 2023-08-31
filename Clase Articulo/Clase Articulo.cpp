#include"Articulo.h"
int main() {
    string nombre;
    int clave;
    float n;
    float totalIva;
    Articulo subtotal;

    cout << "Ingrese la clave del articulo: ";
    cin >>clave;
    cout << "Ingrese el nombre del articulo: ";
    cin >> nombre;
    cout << "Ingrese el precio del articulo: ";
    cin >> n;
    subtotal.setprecio(n);
    cout << "Ingrese la cantidad de articulos vendidos: ";
    cin >> n;
    subtotal.setcantidad(n);

    totalIva = subtotal.total(n,n) * 1.15;
    cout << endl;
    cout << "Nombre del articulo: " << nombre << endl;
    cout << "El total a pagar es: " << totalIva << endl;

    return 0;
}