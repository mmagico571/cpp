/*Hacer un menu que considere las siguientes opcciones
1 cubo de un numero
2 par o impar
3 salir*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	int opccion, numero, cubo;
	
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Seleccione una opccion: ";
	cin>>opccion;
	
	switch(opccion){
		case 1:
			cout<<"Ingrese un numero: ";
			cin>>numero;
			cubo = pow(numero,3);
			cout<<"El cubo del numero es: "<<cubo;
			break;
		case 2:
			cout<<"Ingrese un numero: ";
			cin>>numero;
			if((numero%2) == 0){
				cout<<"el numero es par";
			}else{
				cout<<"El numero es impar";
			}
			break;
		case 3: exit; break;
		default: cout<<"Rango incorrecto";
	}
}
