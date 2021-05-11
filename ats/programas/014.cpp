/*Determinar si un numero es par o impar*/
#include<iostream>
using namespace std;
int main(){
	int numero;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if(numero == 0){
		cout<<"El numero es cero";
	} else if((numero % 2)==1){
		cout<<"El numero es impar";
	}else{
		cout<<"el numero es par";	
	}	
}
