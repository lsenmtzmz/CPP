/*Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota 
final media de los cuatro alumnos.*/

#include<iostream>
using namespace std;

int main(){
    float noteOne,noteTwo,noteThree,noteFour,result = 0;

    cout<<"\nEjercicio 6."<<endl;
    cout<<"Digite la nota 1: "; cin>>noteOne;
    cout<<"Digite la nota 2: "; cin>>noteTwo;
    cout<<"Digite la nota 3: "; cin>>noteThree;
    cout<<"Digite la nota 4: "; cin>>noteFour;
    
    result = (noteOne+noteTwo+noteThree+noteFour)/4;
    
    cout.precision(2);
    cout<<"\nLa media de las notas es: "<<result<<endl;
    return 0;
}