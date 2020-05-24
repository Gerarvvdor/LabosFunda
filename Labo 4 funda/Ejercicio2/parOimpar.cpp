#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout <<"Par o impar"<< endl<<endl;
    cout <<"Acontinuación favor digite el número que desea comprobar"<<endl;
    cout <<"Número=";
    cin >> a;
    cout <<endl;

    b = a % 2;
    
    if (b == 0){
        cout << a<<":Es par";
    }
    else {
        cout << a<<":Es impar";
    }
    
    return 0;
}