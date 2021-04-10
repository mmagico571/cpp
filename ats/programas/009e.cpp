/*Escriba un programa que lea lso catetos de un triangulo rectangulo
y calcule su hipotenusa*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float catetoA,catetoB,hipotenusa;
	cout<<"Ingrese el valor del cateoto A: ";
	cin>>catetoA;
	cout<<"Ingrese el valor del cateoto B: ";
	cin>>catetoB;
	hipotenusa=sqrt(pow(catetoA,2)+pow(catetoB,2));
	cout<<"La hipotenusa es: "<<hipotenusa;
}
