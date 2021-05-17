//Programa que lee valores enteros hasta que se introduce
//un valor en el rango de 20-30 o 0 debe entregar la suma
//de los valores mayores a 0 introducidos
#include<iostream>
using namespace std;

int main(){
	
	int numero, suma=0;
	
	do{
		cout<<"Ingrese un numero: ";
		cin>>numero;
		if((numero>0)&&(numero<10||numero>30)){
			suma=suma+numero;
		}
	}while((numero<20||numero>30)&&(numero!=0));
	cout<<"suma: "<<suma;
}
