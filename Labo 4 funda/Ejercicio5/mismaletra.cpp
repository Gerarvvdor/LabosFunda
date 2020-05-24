#include <iostream>
#include <string.h>

using namespace std;
int main(){
    string palabra, letraI, letraF;

    cout<<"A continuación ingrese la palabra que desee = ";
    cin>>palabra;
    cout<<endl<endl;

    letraI = palabra[0];
    letraF = palabra[palabra.length() -1];

    if (letraI == letraF){
        cout<<"Perfecto! ambas letras son iguales.";
    }
    else{
        cout<<"Lo lamento, las letras son diferentes.";
    }
     

    

}