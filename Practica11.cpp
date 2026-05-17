#include<iostream>
#include<cmath>

using namespace std;
//Función.
int main (){
    
    //Variables.
    int numero, dato = 5;
    
    //Ingreso de datos (Entrada).
    cout<<"\nIngrese un numero: "; cin>>numero;
    
    //Condicional.
    if(numero != dato){
        cout<<"El numero no es 5\n\n";
    }
    //Si no se cumple la condicional.
    else{
        cout<<"El numero es 5\n\n";
    }
    
    return 0;
}