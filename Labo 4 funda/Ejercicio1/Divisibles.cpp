#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float c, d;
    cout <<"Números divisbles entre si"<<endl<<endl;
    cout <<"Digite a y b"<<endl;
    cin >> a;
    cout <<endl;

    cin >> b;
    cout <<endl<<endl;
    
    c = a / b;
    d = a % b;

    cout << "Resultado"<<endl;
    cout <<"Resultado de división"<<"="<<c<<endl;
    cout <<"Residuo"<<"="<<d<<endl;

     if (d == 0){
         cout << "Excelente, los números son divisibles"<< endl;
         
     }
    else {
        cout << "No son divisibles" << endl;
     }
    return 0;



}