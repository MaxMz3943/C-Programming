/* Maximiliano Torres | 10/10/2026 | Practica 23 */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int res = 0, aux;
	for(int i = 1; i<=10; i++){
		aux =  i * i;
		res += aux;
	}
	cout<<"La suma de los cuadrados de todos los primeros 10 enteros es de: "<<res<<endl;
	system("pause");
	return 0;
}
