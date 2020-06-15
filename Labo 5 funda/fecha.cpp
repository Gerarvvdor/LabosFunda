#include <iostream>
#include <ctime>
#include <vector>

using namespace std;
int main(){
    int dd, mm, aa;

    cout<<"Ingrese el día, mes y año de una fecha cualquiera"<<endl;
    cout<<"Día:";
    cin>>dd;
    cout<<endl;

    cout<<"Mes";
    cin>>mm;
    cout<<endl;

    cout<<"Año";
    cin>>aa;
    cout<<endl;
    cout<<"Fecha ingresada: ";

//condicional si año es bisiesto
cout<<"Fecha ingresada con un día más sumado:";
    if ((aa%4==0) && (aa%100!=0) || (aa%400==0))
    {
        if ((aa > 0) && (mm <= 11) && (dd <= 31))//pasar de día
        {
            aa = aa;
            mm = mm;
            dd = (dd+1);
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        else if ((aa > 0) && (mm <= 11) && (dd <= 31))//pasar de mes
       {
           aa = aa;
           mm = (mm +1);
           dd = 1;
           cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
       }
        else if ((aa > 0) && (mm <= 12) && (dd <= 31))//pasar de año
        {
            aa = (aa+1);
            mm = 1;
            dd = 1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        
        //meses de 30 días
        else if ((aa > 0) && (mm <= 11) && (dd <= 30))//pasar de día
        {
            aa = aa;
            mm = mm;
            dd = (dd+1);
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        else if ((aa > 0) && (mm <= 11) && (dd <= 30))//pasar de mes
        {
            aa = aa;
            mm = (mm + 1);
            dd = 1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        else if ((aa > 0) && (mm = 12) && (dd = 30))//pasar de año
        {
             aa = (aa+1);
            mm = 1;
            dd =1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        
        //para febrero
        else if ((aa > 0) && (mm = 2) && (dd = 29))
        {
            aa = aa;
            mm = (mm +1);
            dd = 1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        
    }
    else if (aa != ((aa%4==0) && (aa%100!=0) || (aa%400==0)))
    {
       if ((aa > 0) && (mm <= 11) && (dd <= 29))//pasar de día
        {
            aa = aa;
            mm = mm;
            dd = (dd+1);
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        else if ((aa > 0) && (mm <= 11) && (dd <= 31))//pasar de mes
       {
           aa = aa;
           mm = (mm +1);
           dd = 1;
           cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
       }
        else if ((aa > 0) && (mm <= 12) && (dd <= 31))//pasar de año
        {
            aa = (aa+1);
            mm = 1;
            dd =1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        
        //meses de 30 días
        else if ((aa > 0) && (mm <= 11) && (dd <= 30))//pasar de día
        {
            aa = aa;
            mm = mm;
            dd = (dd+1);
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        else if ((aa > 0) && (mm <= 11) && (dd <= 30))//pasar de mes
        {
            aa = aa;
            mm = (mm +1);
            dd = 1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        else if ((aa > 0) && (mm <= 12) && (dd <= 30))//pasar de año
        {
            aa = (aa+1);
            mm = 1;
            dd =1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
        //para febrero
        else if ((aa > 0) && (mm = 2) && (dd = 28))
        {
            aa = aa;
            mm = (mm +1);
            dd = 1;
            cout<<"La fecha ingresada un dia despues es: "<<dd<<"/"<<mm<<"/"<<aa<<endl;
        }
    }
    return 0;
}