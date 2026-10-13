/* Maximiliano Torres | 10/10/2026 | Practica 24 */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num, res = 0;
	do{
		cout<<"Ingrese un numero: \n"; cin>>num;
		if(num > 0){
			res += num;
		}
	}while((num != 0 && num<20) || num>30);
	
	if(num == 0){
		cout<<"Se detuvo el programa por el cero."<<endl;
	}else{
		cout<<"Se detuvo el programa debido a que se ingreso un numero del 20 - 30."<<endl;
	}
	cout<<"La suma de los numeros ingresados mayores a 0 es de: "<<res<<endl;
	system("pause");
	return 0;
}
