#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    int neg = -1, menosb, bcuadrado;
    int cuatro = 4, cuatro_axc, dos_a;
    int two = 2, x_uno, x_dos;
    cout << "Formula general para una cuadrática cuialquiera" << endl << endl;
    cout << "Digite el valor de a, b y c" << "(ojo!, coloque signo positivo o negativo a los valores" << endl;
    cout << "Ejemplo:" << endl << "a = 6" << endl << "b = -3" << endl << "c = -2" << endl;
    cout << "De no ser así, el programa no podrá realizar su trabajo de forma correcta)" << endl; 

    cout << "a=";
    cin >> a;
    cout << endl;
   
    cout << "b=";
    cin >> b;
    cout << endl;
    
    cout << "c=";
    cin >> c;
    cout << endl;
  

    cout << "Cuadrática con valores de a,b y c" << endl;
    cout << a << "x^2" << b << "x" << "+" << c << endl << endl;

    menosb = ( b * neg);
    bcuadrado = pow(b,2);
    cuatro_axc = (cuatro * (a * c));
    dos_a = (two * a);
    x_uno = ((menosb + sqrt(bcuadrado - cuatro_axc)) / dos_a);
    x_dos = ((menosb - sqrt(bcuadrado - cuatro_axc)) / dos_a);

    cout << "La cuadrática resuelta por formula general da como resultado" << endl;
    cout << x_uno << endl << x_dos << endl;
    return 0;
}