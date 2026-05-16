//Maximiliano Torres | 15/05/2025 | Practica 10
#include<iostream>
#include<cmath>

using namespace std;
//Funcion principal
int main (){
    //Variables
    float a = 0, b = 0, hipotenusa = 0;

    //Ingreso de datos (Entrada)
    cout<<"Ingrese el cateto opuesto (A): "; cin>>a;
    cout<<"Ingresa el cateto adyacente (B): "; cin>>b;

    //Proceso
    hipotenusa = sqrt((a*a)+(b*b));

    //Impresion de datos (Salida)
    cout.precision(3);
    cout<<"\nEl valor de la hipotenusa es de: "<<hipotenusa<<"\n\n";
    return 0;
}