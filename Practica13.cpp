//Maximiliano Torres | 01/10/2026 | Practica 13
#include<iostream>
using namespace std;
int main(){
	int num1, num2;
	cout<<"Digite dos numeros: "; cin>>num1>>num2;
	if(num1 == num2){
		cout<<"\nAmbos numeros son iguales.";
		
	}else if(num1>num2){
		cout<<"\nEl numero mayor es: "<<num1;
	}
	else{
		cout<<"\nEl numero mayor es: "<<num2;
	}
	return 0;
}
