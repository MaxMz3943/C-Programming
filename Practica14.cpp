//Maximiliano Torres | 01/10/2026 | Practica 14
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Ingresa un numero: "; cin>>num;
	if(cin.fail()){
		cout<<"Ingresa un numero valido";	
	} else if(num == 0){
		cout<<"El numero ingresado es 0";
	} else if(num<0){
		cout<<"El numero ingresado es negativo";
	}
	else{
		cout<<"El numero ingresado es positivo";
	}
	return 0;
}
