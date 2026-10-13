#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int limite, res = 0;
	cout<<"Ingrese un numero limite: "; cin>>limite;
	for(int i = 0; i<=limite;i++){
		res += i;	
	}
	cout<<"\nLa suma de los numeros es de: "<<res<<endl;
	system("pause");
	return 0;
}
