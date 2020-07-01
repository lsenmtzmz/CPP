/*Ejercicio 8: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo
 rectángulo y escriba en la salida estándar su hipotenusa.*/

#include<iostream>
#include  <math.h>
using namespace std;

int main(){
    float opposite,adjacent, result = 0;
    
    cout<<"\nEjercicio 8."<<endl;
    cout<<"Digite el cateto opuesto: "; cin>>opposite;
    cout<<"Digite el cateto adyacente: "; cin>>adjacent;
    
    result = sqrt(adjacent*adjacent + opposite*opposite);
    
    cout.precision(2);
    cout<<"\nLa Hipotenusa es igual a: "<<result<<endl;
    return 0;
}