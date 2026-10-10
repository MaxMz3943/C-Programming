/* Maximiliano Torres | 9/10/2026 | Practica 22 */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int num, res, i;
	do{
		cout<<"Ingrese un numero del 1 al 10: "<<endl; cin>>num;
		if(cin.fail()){
			cin.clear();
   			cin.ignore(1000, '\n');
   			num = 0;
			cout<<"Ingrese un numero valido.\n\n";
		}
		else if(num<1 || num>10){
			cout<<"El numero esta fuera del rango.\n\n";
		}
	}while(num<1 || num>10);
	
	for(i=1; i<=10; i++){
		res = num * i;
		cout<<num<<" * "<<i<<" = "<<res<<endl;
	}
	system("pause");
	return 0;
}
