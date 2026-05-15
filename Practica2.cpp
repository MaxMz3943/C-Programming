/* Maximiliano Torres | 27/03/2026 | Practica 2
Objetivo: En esta segunda practica tenemos que definir distintos tipos de variables
como los son enteros, flotantes, double entre otras... Y seguido de esto darles
un valor para que puedan ser impresas en pantalla.

Sintaxis
- int nombre_variable = Define una variable de numero entero como lo son 5,3,89.
- float nombre_variable = Define una variable de un numerod decimal como lo son 3.14, 24.5.
- double nombre_variable = Al igual que int, se usan numeros enteros pero con la diferencia 
de que puede manejar numeros muchisimos mas grandes teniendo mas capacidad.
-char nombre_variable = Define una variable de un solo caracter, por ejemplo A,S,@,;, etc...
*/
#include <iostream>

using namespace std;

//Función principal
int main(){
    //Variables
    int numero = 15;
    float decimal = 4.6;
    double decimal_mayor = 293.53348;
    char letra = 'B';

    //Impresion de datos (Salida)
    cout<<numero<<endl;
    cout<<decimal<<endl;
    cout<<decimal_mayor<<endl;
    cout<<letra<<endl;

    return 0;
}