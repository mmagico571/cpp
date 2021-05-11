/*Escriba un programa que solicite una edad
e indique si esta en el rango de 18 a 25*/
#include<iostream>
using namespace std;
int main(){
	int edad;
	
	cout<<"Ingrese la edad: ";
	cin>>edad;
	
	if((edad>=18) && (edad<=25)){
		cout<<"Dentro del rango";
	}else{
		cout<<"Fuera de rango";
	}
	
}
