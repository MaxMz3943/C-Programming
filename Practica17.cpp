#include<iostream>
using namespace std;
int main(){
	int numero, unidades, decenas, centenas, millar;
	cout<<"Ingresa un numero para convertirlo a romano: "; cin>>numero; //2152
	
		if(numero > 3999  || numero < 1){
			cout<<"Ingresa un valor entre 1 - 3999";
		}
	
	unidades = numero%10; numero = numero/10; //unidades = 2, 215   I, II, III, IV, V, VI, VII, VIII, IX, X
	decenas = numero%10; numero = numero/10; //decenas = 5, 21   X, XX, XXX, Xl, L, LX, LXX, LXXX, XC
	centenas = numero%10; numero = numero/10; //centenas = 1, 2   C, CC, CCC, CD, D, DC, DCC, DCCC, CM
	millar = numero;                         // M, MM, MMM
	//millares = numero%10; numero/=10 //millar 
			
	switch(millar){
		case 1: 
			cout<<"M";
			break;
		case 2:
			cout<<"MM";
			break;
		case 3:
			cout<<"MMM";
			break;
	}
	switch(centenas){
		case 1:
			cout<<"C";
			break;
		case 2:
			cout<<"CC";
			break;
		case 3:
			cout<<"CCC";
			break;
		case 4:
			cout<<"CD";
			break;
		case 5:
			cout<<"D";
			break;
		case 6:
			cout<<"DC";
			break;
		case 7:
			cout<<"DCC";
			break;
		case 8:
			cout<<"DCCC";
			break;
		case 9:
			cout<<"CM";
			break;
	}
	switch(decenas){
		case 1:
			cout<<"X";
			break;
		case 2:
			cout<<"XX";
			break;
		case 3:
			cout<<"XXX";
			break;
		case 4:
			cout<<"XL";
			break;
		case 5:
			cout<<"L";
			break;
		case 6:
			cout<<"LX";
			break;
		case 7:
			cout<<"LXX";
			break;
		case 8:
			cout<<"LXXX";
			break;
		case 9:
			cout<<"XC";
			break;
		}
		switch(unidades){
		case 1:
			cout<<"I";
			break;
		case 2:
			cout<<"II";
			break;
		case 3:
			cout<<"III";
			break;
		case 4:
			cout<<"IV";
			break;
		case 5:
			cout<<"V";
			break;
		case 6:
			cout<<"VI";
			break;
		case 7:
			cout<<"VII";
			break;
		case 8:
			cout<<"VIII";
			break;
		case 9:
			cout<<"IX";
			break;
		}
	return 0;
}
