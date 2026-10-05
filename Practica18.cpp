/* Maximiliano Torres | 05/10/2026 | Practica 18 */
#include<iostream>
using namespace std;
int main(){
	float saldo = 1000, monto_nuevo = 0;
	int opcion = 0;
	
	cout<<"Bienvenido al cajero\n";
	cout<<"\n1. Ingresar dinero en la cuenta\n\n"
		<<"2. Retirar dinero de la cuenta\n\n"
		<<"3. Salir\n\nOpcion: "; cin>>opcion;
	
	switch(opcion){
		
		case 1:
			cout<<"\n\n****INGRESAR DINERO****\n\n"
				<<"SALDO: "<<saldo
				<<"\n\nCuanto dinero gusta ingresar?: "; cin>>monto_nuevo;
			
			if(monto_nuevo<=0){
				cout<<"\nIngrese un monto valido.";
			}else{	
				saldo = saldo + monto_nuevo;
				cout<<"\n\nEXITO!!\n\n"
					<<"Su saldo actual es de: "<<saldo;
			}
			break;
			
		case 2: 
			cout<<"\n\n****RETIRAR DINERO****\n\n"
				<<"SALDO: "<<saldo<<"\n\n"
				<<"Cuanto dinero gusta retirar?: "; cin>>monto_nuevo;
			
			if(monto_nuevo<=0){
				cout<<"\nIngrese un monto valido.";
			}else if(monto_nuevo>saldo){
				cout<<"\nNo tiene esa cantidad de dinero.";
			} else{
				saldo = saldo - monto_nuevo;
				cout<<"\n\nEXITO!!\n\n"
					<<"Su saldo actual es de: "<<saldo;
			}
			break;
		case 3:
			cout<<"\n\nHa salido con exito de la app!";
			break;
		default:
			cout<<"\n\nIngrese una opcion valida.";
			break;			
	}
	return 0;
}
