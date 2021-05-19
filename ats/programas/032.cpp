/*Escribe un programa que lea de la entrada los elementos de 
un vector y los muestre en su salida estandar los numeros
con sus indices*/
#include<iostream>
using namespace std;

int main(){
	int numElementos;
	cout<<"Ingrese el numero de elementos del vector: ";
	cin>>numElementos;
	int vector[numElementos];
	
	for(int i=0; i<numElementos;i++){
		cout<<"Ingrese el elemento "<<i<<": ";
		cin>>vector[i];
	}
	
	for(int i=0;i<numElementos;i++){
		cout<<i<<"->"<<vector[i]<<endl;
	}
	
}
