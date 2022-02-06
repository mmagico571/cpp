//e2.6.3
/*Suponga que tiene que escribir un programa para determinar el valor de ergios, da-
das las relaciones:
Ergios = fergios * sqrt(lergios)
Lergios = 2 * π * e^μ
 * */
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//salidas
	float ergios = 0;
	//Entradas
	float fergios = 0;
	//constantes
	float lergios = 0;
	float pi= 3.1416;
	float u = 1.672;
	float e = 2.7818;
	//entrada de datos
	cout<<"Ingrese el valor de los fergios: ";
	cin>>fergios;
 	//operaciones
	lergios = 2 * pi * pow(e,u);
	ergios = fergios * sqrt(lergios);
	//salida en pantalla
	cout<<endl<<ergios;
}
