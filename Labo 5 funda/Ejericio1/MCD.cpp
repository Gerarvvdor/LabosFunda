#include <iostream>

using namespace std;
int main(){
    int a, b, op1, r;

    cout<<"Encontraremos el mcd de dos números ingresados por el usuario, por favor ingrese el valor de a y de b"<<endl;
    cout<<"a=";
    cin>>a;
    cout<<"Valor de a="<<a<<endl;
    cout<<"b=";
    cin>>b;
    cout<<"Valor de b="<<b<<endl;

    op1 = (a/b);
    r = (a%b);
    
    while (r != 0)
    {
        a=b;
        b=r;

        if (a > b)
        {
            op1 = (a/b);
            r = (a%b);
        }
        
    }
    cout<<"\n El MCD es "<<b<<endl;

    
    return 0;
}