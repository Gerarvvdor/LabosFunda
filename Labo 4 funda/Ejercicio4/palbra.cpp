#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int largo, cant, resp1;
    string palabra;

    
    cout << "Escriba la palabra que desea"<<endl<<endl;
    cin>> palabra;
    cout<<endl<<endl;
   

    largo = palabra.length();
    cant = largo%2;
    resp1 = largo;
    cout<<palabra<<" Tiene "<<largo<<" caracteres es decir; ";
    
    if (cant == 0)
    {
        cout<<"Es par y ";
    }
    else if (cant != 0)
    {
        cout<<"Es impar y ";
    }
    if(largo > 10)
    {
        cout<<"tiene más de 10 caracteres";
    }
    if(largo < 10){
        cout<<"tiene menos de 10 caracteres";
        
    }
    
    return 0;
    
    



    

    
}