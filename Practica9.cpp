#include<iostream>

using namespace std;
//Funcón principal
int main (){
    //Variables
    float practicas = 0, teoria = 0, participacion = 0, nota_final = 0;

    //Ingreso de datos (Entrada)
    cout<<"\nIngresa la calificación de tus practicas: "; cin>>practicas;
    cout<<"Ingresa la calificación de la nota teorica: "; cin>>teoria;
    cout<<"Ingresa la calificación de la participación: "; cin>>participacion;

    //Proceso
    nota_final = ((practicas * .30) + (teoria * .60) + (participacion * .10));

    //Impresion de datos (Salida)
    cout<<"\nLa nota final es de: "<<nota_final<<"\n\n";

    return 0;
}