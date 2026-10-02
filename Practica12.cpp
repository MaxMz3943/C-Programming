//Maximiliano Torres | 01/10/2026 | Practica 12 
#include<iostream>
using namespace std;
int main (){
	int num1;
	
	cout<<"Ingresa la opcion que desees"<<endl; cin>>num1;
			
	switch(num1){
		case 1:
			cout<<"\nHas seleccionado la opcion 1";
			break;	
		case 2:
			cout<<"\nHas seleccionado la opcion 2";
			break;
		default:
			cout<<"\nIngresa una opcion valida";
			break;
	}
	return 0;
}
