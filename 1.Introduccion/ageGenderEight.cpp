/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
    Edad: dato de tipo entero.
    Sexo: dato de tipo carácter.
    Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include<iostream>
using namespace std;

int main(){
    int age; char gender[10]; float eigth;

    cout<<"Digite su edad: "; cin>>age; 
    cout<<"Digite su sexo: "; cin>>gender; 
    cout<<"Digite su altura: "; cin>>eigth; 

    cout<<"\nSu edad es: "<<age<<endl; cout<<"Usted es: "<<gender<<endl; cout<<"Mide : "<<eigth<<endl;
    return 0;
}