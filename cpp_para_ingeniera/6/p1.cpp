/*Programa que utiliza que mediante una funcion que recibe 
*/

#include<iostream>
using namespace std;

void encontrar_Max(int, int);

int main(){
int primerNumero, segundoNumero;
cout<<"Introdusca un numero: ";
cin>>primerNumero;
cout<<"Introdusca otro numero: ";
cin>>segundoNumero;
encontrar_Max(primerNumero, segundoNumero);
}

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

