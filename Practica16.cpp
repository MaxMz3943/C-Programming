#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3, num4;
	cout<<"Ingresa 3 numeros: "<<endl; cin>>num1>>num2>>num3;
	cout<<"\nAhora, ingrese un cuarto numero: "; cin>>num4;
	if(num1==num4||num2==num4||num3==num4){
		cout<<"\nEl numero cuatro coincide con los numeros ingresados con anterioridad";	
	} else {
		cout<<"\nEl numero ingresado no coincide con ningun otro.";
	}
	return 0;
}
