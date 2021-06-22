/*Programa que solicita datos al usuario
y los muestre en pantalla*/
#include<iostream>
using namespace std;
int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Introdusca su edad: ";
	cin>>edad;
	cout<<"introdusca su sexo: ";
	cin>>sexo;
	cout<<"introdusca su altura en metros: ";
	cin>>altura;
	
	cout<<"Edad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura: "<<altura<<endl;	
}
