/*Programa que solicita 3 numeros y etermina cual es el mayour*/
#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3, mayor;
	
	cout<<"Ingrese el valor del primer numero: ";
	cin>>num1;
	cout<<"Ingrese el valor del segundo numero: ";
	cin>>num2;
	cout<<"Ingrese el valor del tercer numero: ";
	cin>>num3;
	
	if(num1 > num2){
		mayor = num1;
	}else{
		mayor = num2;
	}
	
	if(mayor > num3){
		cout<<mayor;
	}else{
		mayor=num3;
		cout<<mayor;
	}
	
}
