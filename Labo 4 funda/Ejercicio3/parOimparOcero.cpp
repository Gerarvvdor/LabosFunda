#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a;

    cout<<"Verfique si el número ingresado es positivo, negativo o 0"<<endl;
    cout<<"A continuación por favor ingrese el número deseado=";
    cin>>a;
    cout<<endl<<endl;
    
    if (a == 0)
    {
        cout<<"a Es cero";
    }
    if (a < 0)
    {
        cout<<a<<"Es negativo";
    }
    if (a > 0)
    {
        cout<<a<<"Es positivo";
    }
    
    
    return 0;
    
}