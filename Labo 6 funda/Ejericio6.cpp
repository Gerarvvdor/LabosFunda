#include <iostream>

using namespace std;

int AB(int arreglo[], int n, int numero){
    int numAB = 0;
    for (int i = 0; i < n; i++){
        if (arreglo[i] == numero){
            numAB++;
        }
    }
return numAB;
}

int main(){
    int arreglo[20] = {1, 5, 1, 8, 3, 4, 6, 4, 8, 1, 5, 6, 3, 1, 4, 7, 9, 1, 2, 5};
    int n;

    cout<<"Ingrese el número que quiere comparar: ";
    cin>>n;
    
    cout<<"El número de repeticiones del número "<<n<<" digitado dentro del arreglo son "<<AB(arreglo, 20, n);
 
 
 return 0;
 }
