//Maximiliano Torres | 14/05/2026 | Practica 6
#include<iostream>

using namespace std;

int main(){
    //Variables
    float a = 0, b = 0, c = 0, d = 0, res_ec1 = 0, res_ec2 = 0;

    //Ingreso de datos (Entrada)
    cout<<"Ingrese el primer numero que corresponde a A: "<<endl;  cin>>a;
    cout<<"Ingrese el primer numero que corresponde a B: "<<endl;  cin>>b;
    cout<<"Ingrese el primer numero que corresponde a C: "<<endl;  cin>>c;
    cout<<"Ingrese el primer numero que corresponde a D: "<<endl;  cin>>d;

    //Procesos
    res_ec1 = (a/b)+1;
    res_ec2 = (a+b)/(c+d);

    //Impresion de resultados (Salida)
    cout.precision(3);
    cout<<"El resultado de la formula A/B +1 es de: "<<res_ec1<<endl;
    cout<<"El resultado de la formula A+B/C+D es de: "<<res_ec2<<endl<<endl;

    return 0;
}