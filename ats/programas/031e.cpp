/*Programa que define un vector de numeros
y calcula la multiplicacion acumulada de sus elementos*/
#include<iostream>
using namespace std;

int main(){
	int vector[5]={1,2,3,4,5};
	int multiplicacion=1;
	
	for(int i=0;i<5;i++){
		multiplicacion = multiplicacion * vector[i];
	}
	
	cout<<"multiplicacion: "<<multiplicacion;
	
}
