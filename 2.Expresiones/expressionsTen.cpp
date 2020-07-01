/*Ejercicio 10: Escriba un programa que calcule las soluciones de una ecuación de segundo
 grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que:
  (-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)*/

#include<iostream>
#include  <math.h>
using namespace std;

int main(){
    float a,b,c, resultOne = 0, resultTwo;

    cout<<"\nEjercicio 10."<<endl;
    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;
    
    resultOne = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    resultTwo = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    
    cout.precision(2);
    cout<<"\nEl primer resultado es: "<<resultOne<<endl;
    cout<<"El segundo resultado es: "<<resultTwo<<endl;
    return 0;
}