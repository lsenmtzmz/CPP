/*Ejercicio 7: La calificación final de un estudiante es la media ponderada de tres 
notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% 
y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar 
las tres notas de un alumno y escriba en la salida estándar su nota final.*/

#include<iostream>
using namespace std;

int main(){
    float theoretical,practice,shared, result = 0;
    
    cout<<"\nEjercicio 7."<<endl;
    cout<<"Digite la nota teorica: "; cin>>theoretical;
    cout<<"Digite la nota practica: "; cin>>practice;
    cout<<"Digite la nota de participación: "; cin>>shared;
    
    result = (theoretical * 0.30) + (practice * 0.60) + (shared * 0.10);
    
    cout.precision(2);
    cout<<"\nLa media ponderada de las notas es: "<<result<<endl;
    return 0;
}