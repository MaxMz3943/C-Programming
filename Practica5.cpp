//Maximiliano Torres | 14/05/2026 | Practica 5 
#include<iostream>

using namespace std;

//Función principal
int main(){
    //Variables
    int edad;
    char sexo[10];
    float altura;

    //Ingreso de datos (Entrada)
    cout<<"Digite su edad: "<<endl;  cin>>edad;
    cout<<"Ingrese su sexo"<<endl;  cin>>sexo;
    cout<<"Ingrese su altura"<<endl;  cin>>altura;

    //Impresión de los datos (Salida)
    cout<<"Hola!, su edad es de "<<edad<<endl
        <<"Su sexo seleccionado es "<<sexo<<endl
        <<"Y su altura ingresada es de "<<altura<<endl;

    return 0;
}