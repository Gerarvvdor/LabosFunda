#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
int main(){
    int hr, min, seg, hrn, minn, segn;

    cout<<"Ingrese la hora por hora, minutos y segundos"<<endl;
    cout<<"Hora: ";
    cin>>hr;
    cout<<"Minutos: ";
    cin>>min;
    cout<<"Segundos: ";
    cin>>seg;

    if ((hr < 24) && (min <= 59) && (seg <= 58)) //para pasar de segundo
    {
        hr = hr;
        min = min;
        seg = (seg + 1);

        cout<<"La hora ingresada más un segundo es: "<<hr<<":"<<min<<":"<<seg<<endl;
    }
    else if ((hr < 24) && (min <= 58) && (seg = 59)) //para pasar de minuto
    {
        hr = hr;
        min = (min + 1);
        seg = 00;

        cout<<"La hora ingresada más un segundo es: "<<hr<<":"<<min<<":"<<seg<<endl;
    }
    else if ((hr <23) && (min = 59) && (seg = 59)) //para pasar de hora
    {
        hr = (hr + 1);
        min = 00;
        seg = 00;

        cout<<"La hora ingresada más un segundo es: "<<hr<<":"<<min<<":"<<seg<<endl;
    }
    else if ((hr < 24) && (min = 59) && (seg = 59)) //para media noche
    {
        hr = 00;
        min = 00;
        seg = 00;

        cout<<"La hora ingresada más un segundo es: "<<hr<<":"<<min<<":"<<seg<<endl;
    }
    else //no cumple niguna condición
    {
        cout<<"La hora ingresada sobrepasa las 24 horas"<<endl;
    }
    
return 0;
}