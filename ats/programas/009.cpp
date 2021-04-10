/*La calificacion final de un estudiante es la media ponderada de 3 notas:
la nota de practicas que cuenta con un 30% del final, 
la nota teorica que cuenta con un 60%, y la nota de participacion 10%
Escriba un programa que lea las tres notas y que por salida muestre
la nota final*/
#include<iostream>
using namespace std;
int main(){
	float calFinal,practica, teorica, participacion;
	cout<<"Ingrese la calificacion teorica: ";
	cin>>teorica;
	cout<<"Ingrese la calificacion practica: ";
	cin>>practica;
	cout<<"Ingrese la calificacion participacion: ";
	cin>>participacion;
	calFinal=(practica*0.3)+(teorica*0.6)+(participacion*0.1);
	cout<<"La calificacion Final es: "<<calFinal;
}
