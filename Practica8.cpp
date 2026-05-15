//Maximiliano Torres | 15/05/2026 | Practica 8 
#include<iostream>

using namespace std;
//Función principal
int main (){
    //Variables
    int num1 = 0, num2 = 0, aux = 0;

    //Ingreso de datos (Entrada)
    cout<<"Ingrese el numero 1:"<<endl; cin>>num1;
    cout<<"Ingrese el numero 2: "<<endl; cin>>num2;

    //Procesos 
    aux = num1;
    num1 = num2;
    num2 = aux;

    //Impresion de datos (Salida )
    cout<<"El nuevo valor del numero 1 es de: "<<num1<<endl;
    cout<<"El numero valor del numero 2 es de: "<<num2<<endl<<endl;
    
    return 0;
}