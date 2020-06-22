#include <iostream>

using namespace std;
//*Función para ingresar los valores de losa rreglos*//
void llenar(int arregloA[], int tamanio){
    int llenar;
    for (int i = 0; i < tamanio ; i++)
    {
        cout<<"Ingrese valor"<<(i + 1)<<": ";
        cin>>llenar;
        arregloA[i] = llenar;}
}

//*función que suma los arreglos*//
int sum(int arregloA[], int arregloB[], int tamanio, int sumaarreglos[]){
    int sumar;
    for (int i = 0; i < tamanio; i++)
    {
        sumaarreglos[i] = (arregloA[i] + arregloB[i]);}    
}

//*funcion que muestra el arreglo
int final(int sumarreglos[], int arregloresultante[], int tamanio){
    for (int i = 0; i < tamanio; i++){
        arregloresultante[i] = sumarreglos[i];
    }
    
    sumarreglos = arregloresultante;
}
int main(){
    
    int n;
    
    cout<<"Ingrese n: ";
    cin>>n;
    int sumaarreglos[n];
    int arregloA[n] = {0};
    int arregloB[n];
    int arregloresultante[n];

    cout<<"El tamaño de los arreglo es de "<<n<<" valores"<<endl;
   
    {//*primera función*//
    llenar(arregloA, n);
    cout<<"arregloA["<<n<<"]"<<" = {";
    for (int i = 0; i < n; i++)
    {
        arregloA[i];
        cout<<arregloA[i]<<", ";
    }
    cout<<"}"<<endl;
    
    llenar(arregloB, n);
    cout<<"arregloB["<<n<<"]"<<" = {";
    for (int i = 0; i < n; i++)
    {
        arregloA[i];
        cout<<arregloB[i]<<", ";
    }
    cout<<"}"<<endl;
}
    {//segunda función
    sum(arregloB, arregloA, n, sumaarreglos);
    cout<<"La suma de los arreglos es: "<<"Arreglos.sumados["<<n<<"] = {";
    for (int i = 0; i < n; i++)
    {
        sumaarreglos[i];
        cout<<sumaarreglos[i]<<", ";
    }
    cout<<"}"<<endl;
    }
    
     
    return 0;
}  



