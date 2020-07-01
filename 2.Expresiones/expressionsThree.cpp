//Ejercicio 3: Escribe la siguiente expresión como expresión en C++: (a+(b/c))/(d+(e/f))
#include<iostream>
using namespace std;

int main(){
    float a, b, c, d, e, f, result = 0.0; 
    cout<<"\nEjercicio 2."<<endl;
    cout<<"Vamos a calcular el valor de la expresión: (a+(b/c))/(d+(e/f))"<<endl;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    cout<<"Digite el valor de d: "; cin>>d;
    cout<<"Digite el valor de e: "; cin>>e;
    cout<<"Digite el valor de f: "; cin>>f;

    result = (a+(b/c))/(d+(e/f));

    cout.precision(2); // Redondear los números flotantes o double que van a ser impresos
    cout<<"\nResultado de evaluar la expresión (a+(b/c))/(d+(e/f)): "<<result<<endl;
    return 0;
}