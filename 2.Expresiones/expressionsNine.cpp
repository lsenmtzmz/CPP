/*Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente función
 para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/

#include<iostream>
#include  <math.h>
using namespace std;

int main(){
    float x,y, result = 0;
    
    cout<<"\nEjercicio 9."<<endl;
    cout<<"Digite el número x: "; cin>>x;
    cout<<"Digite el número y: "; cin>>y;
    
    result = sqrt(x) / (pow(y,2)-1);
    
    cout.precision(2);
    cout<<"\nLa Hipotenusa es igual a: "<<result<<endl;
    return 0;
}