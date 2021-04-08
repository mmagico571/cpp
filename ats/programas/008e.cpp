/*Programa que lee las calificaciones de 4 alumnos
y calcula la media de las calificaciones*/
#include<iostream>
using namespace std;
int main(){
	float media,califAlumno1,califAlumno2,califAlumno3,califAlumno4;
	cout<<"Ingrese la calificacion del alumno 1: ";
	cin>>califAlumno1;
	cout<<"Ingrese la calificacion del alumno 2: ";
	cin>>califAlumno2;
	cout<<"Ingrese la calificacion del alumno 3: ";
	cin>>califAlumno3;
	cout<<"Ingrese la calificacion del alumno 4: ";
	cin>>califAlumno4;
	media=(califAlumno1+califAlumno2+califAlumno3+califAlumno4)/4;
	cout<<"La media es: "<<media;
}
