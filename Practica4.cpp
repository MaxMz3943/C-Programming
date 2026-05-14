//Maximiliano Torres | 13/05/2026 | Practica 4 
#include <iostream>
 
using namespace std;

//Función principal
int main(){
    int num1 = 0, num2 = 0, sum = 0, res = 0, multi = 0, div = 0;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>num2;

    //Procesos
    sum=num1+num2;
    res=num1-num2;
    multi = num1*num2;
    div = num1/num2;

    //Salida de pantalla
    cout<<"La suma de ambos numeros es de: "<<sum<<endl;
    cout<<"La resta de ambos numeros es de: "<<res<<endl;
    cout<<"La multiplicación de ambos numeros es de: "<<multi<<endl;
    cout<<"La división de ambos numeros es de: "<<div<<endl;
}