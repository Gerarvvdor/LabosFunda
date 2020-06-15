#include <iostream>

using namespace std;

int main(){
    int a; 

     cout<<"Calculando si un año es bisiesto, "<<"ingrese el año que desee: "<<endl<<endl;
    
    cin>>a;

    cout<<"A continuación comprobaremos si el año es bisiesto o no"<<endl;

    if ((a % 400) == 0) //es divisible entre 400
    {
        cout<<"El año es bisiesto"<<endl;
    }
    else if ((a%400!=0)&&(a%4==0)&&(a%100!=0)) //no es divisible entre 400, pero si entre 4 y no entre 100.
    {
        cout<<"El año es biciesto"<<endl;
    }
    else //no se cumple ninguna condicion anterior
    {
        cout<<"El año no es biciesto"; 
    }
    
    return 0;
}