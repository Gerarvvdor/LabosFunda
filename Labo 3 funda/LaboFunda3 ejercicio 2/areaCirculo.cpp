#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float r, pi = 3.1416;
    float area, perimetro;
    pow(r,2);
    cout << "Área y perimetro de un cirlulo cualquiera" << endl << endl;

    cout << "Digite el radio del círculo" << '\t';
    cin >> r;
    cout << endl << endl;
   
    area = (pow(r,2) * pi);

    cout << "El área del círculo es:" << '\t' << area << endl << endl;

    perimetro = ((2 * pi) * r);

    cout << "El perimetro del círculo es" << '\t' << perimetro << endl << endl;
    return 0;
    }