/*Escriba un programa que lea un caracter e indique
en la salida si el caracter es una vocal minuscula o no*/
#include<iostream>
using namespace std;
int main(){
	char caracter;
	
	cout<<"digitie un caracter: ";
	cin>>caracter;
	
	switch(caracter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula"; break;
		default: cout<<"No es una vocal";
	}
}
