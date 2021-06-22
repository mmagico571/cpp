//programa que calcula la suma de las potencias de una serie de numeros
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int numero, suma=0;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	for(int i=1;i<=numero;i++){
		suma=suma+pow(2,i);
	}
	
	cout<<"suma= "<<suma;
}
