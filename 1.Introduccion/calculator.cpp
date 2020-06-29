/*1. Escribe un programa que capture la entrada de dos número e muestre 
la salida estandar de las operaciones suma, resta, multiplicación.*/

#include<iostream>
using namespace std;

int main(){
    int numberOne, numberTwo, suma = 0, resta = 0, multiplicacion = 0, division = 0;

    cout<<"Digite el primer número: "; cin>>numberOne;
    cout<<"Digite el segundo número: "; cin>>numberTwo;

    suma = numberOne + numberTwo;
    resta = numberOne - numberTwo;
    multiplicacion = numberOne * numberTwo;
    division = numberOne / numberTwo;
    
    cout<<"Suma: "<<suma<<endl; cout<<"Resta: "<<resta<<endl; 
    cout<<"Multiplicación: "<<multiplicacion<<endl; cout<<"División: "<<division<<endl; 
    return 0;
}