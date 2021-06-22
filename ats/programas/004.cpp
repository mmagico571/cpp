/*Programa que pide dos numeros y muetra su suma, 
resta, multiplicacion y division*/
#include<iostream>
using namespace std;
int main(){
	float numero1, numero2, suma, resta, mult, div;
	cout<<"Ingresa el primer numero: ";
	cin>>numero1;
	cout<<"ingresa el segundo numero: ";
	cin>>numero2;
	suma = numero1+numero2;
	cout<<numero1<<" + "<<numero2<<" = "<<suma<<endl;	
	resta=numero1-numero2;
	cout<<numero1<<" - "<<numero2<<" = "<<resta<<endl;
	mult=numero1*numero2;
	cout<<numero1<<" * "<<numero2<<" = "<<mult<<endl;
	div=numero1/numero2;
	cout<<numero1<<" / "<<numero2<<" = "<<div;
}
