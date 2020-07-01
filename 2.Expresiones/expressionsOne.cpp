// Ejercicio 1: Escribe la siguiente expresión como expresión en C++: (a/b) + 1
#include<iostream>
using namespace std;

int main(){
    float a, b, result = 0.0; 
    
    cout<<"\nEjercicio 1."<<endl;
    cout<<"Vamos a calcular el valor de la expresión: (a/b) + 1"<<endl;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;

    result = (a/b) + 1;

    cout.precision(2); // Redondear los números flotantes o double que van a ser impresos
    cout<<"\nResultado de evaluar la expresión (a/b) + 1: "<<result<<endl;
    return 0;
}
