/*Determinar el mayor de 2 numeros*/
#include<iostream>
using namespace std;
int main(){
	
	int numero1, numero2;
	
	cout<<"ingrese el valor de primer numero: ";
	cin>>numero1;
	
	cout<<"Ingrese el valor del segundo numero: ";
	cin>>numero2;
	
	if(numero1 == numero2){
		cout<<"Los numero son iguales";
	}else if(numero1 > numero2){
		cout<<"el primer numero es mayor al segundo ";
		}else{
		cout<<"el segundo numero es mayor al primero";
	}	
}
