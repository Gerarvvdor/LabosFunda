#include <iostream>
using namespace std;
int main()
{
    int cantidad;
    float precio, total;
    string producto;
    cout << "Bienvenido" << endl << endl;
    cout << "POR FAVOR ESCRIBA EL NOMBRE, CANTIDAD Y PRECIO DEL PRODUCTO A COMPRAR" << "(El nombre del producto en una sóla palabra)" << endl << endl;
   
    cout << "Producto" << "=";
    cin >> producto;
    cout << endl;

    cout << "Cantidad a comprar" << "=";
    cin >> cantidad;
    cout << endl; 

    cout << "Precio" << "=" << "$";
    cin >> precio;
    cout << endl;
    
    total = cantidad * precio;

    cout << "SU COMPRA ES:" << endl; 
    cout << "Producto=" << producto << '\t';
    cout<< "Cantidad=" << cantidad << '\t';
    cout << "Precio=" << precio << '\t'; 
    cout << "Total=" << total << endl;
}