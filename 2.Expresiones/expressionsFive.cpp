// Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos variables.

#include<iostream>
using namespace std;

int main(){
    int a, b, aux; 
    cout<<"\nEjercicio 5."<<endl;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;

    aux = a; a = b; a = aux;

    cout<<"\nEl valor de 'a' es:"<<a<<endl;
    cout<<"El valor de 'b' es:"<<b<<endl;
    return 0;
}