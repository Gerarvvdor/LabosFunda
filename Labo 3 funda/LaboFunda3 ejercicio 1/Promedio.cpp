#include <iostream> 
using namespace std;
int main()
{
    int a, b, c;
    int d = 3;
    int promedio; 
    
    cout << "Promedio de tres números" << endl << endl;

    cout << "Digite el primer número" << '\t';
    cin >> a;
    cout << endl << endl;

    cout << "Digite el segundo número" << '\t';
    cin >> b;
    cout << endl << endl;

    cout << "Digite el tercer número" << '\t';
    cin >> c;
    cout << endl << endl;

    promedio = ((a + b + c) / d);

    cout << "El promedio es:" << '\t' << promedio << endl;
    return 0;
}