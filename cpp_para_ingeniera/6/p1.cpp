/*Programa 6.1:Lamada a una funcion que recibe 2 parametros 
*/

#include<iostream>
using namespace std;
//prototipo de la funcion
void encontrar_Max(int, int);
//Funcion que llama.
int main(){
int primerNumero, segundoNumero;
cout<<"---->Programa que determina el mayor de 2 numeros ingresados<----"<<endl;
cout<<"Introdusca un numero: ";
cin>>primerNumero;
cout<<"Introdusca otro numero: ";
cin>>segundoNumero;
//Llamada a la funcion y paso de parametros
encontrar_Max(primerNumero, segundoNumero);
}
//Declaracion de la funcion.
void encontrar_Max(int a, int b){
	int mayor;
	if(a==b){
		mayor=a;
	}
	
	if(a>b){
		mayor=a;
	}else{
		mayor=b;
	}
	cout<<"El mayor es: "<<mayor<<endl;
}

