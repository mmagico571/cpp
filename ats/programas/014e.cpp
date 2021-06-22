/*Determinar si un digito numero es positivo o negativo*/
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"ingrese un numero: ";
	cin>>numero;
	
	if(numero == 0){
		cout<<"el numero es cero";
	}else if(numero > 0){
		cout<<"El numero es positivo";
	}else{
		cout<<"el numero es negativo";
	}
}
