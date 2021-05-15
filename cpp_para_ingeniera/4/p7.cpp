//Programa 4.7
#include<iostream>
using namespace std;

int main(){
	int opccion;
	double num1, num2;
	
	cout<<"Ingrese 2 numeros: ";
	cin>>num1>>num2;
	
	cout<<"Introdusca un codigo seleccionado: "<<endl;
	cout<<"1 Suma"<<endl;
	cout<<"2 multiplicacion"<<endl;
	cout<<"3 divicion"<<endl;
	cin>>opccion;
	
	switch(opccion){
		case 1: cout<<"suma = "<<(num1+num2); break;
		case 2: cout<<"multiplicacion = "<<(num1*num2); break;
		case 3: cout<<"divicion = "<<(num1/num2); break;
		default: cout<<"codigo invalido";
	}
}
