//Programa que calcula el factorial de un numero
#include<iostream>
using namespace std;

int main(){
	int numero, factorial=1;
	
	cout<<"ingrese un numero: ";
	cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial=factorial*i;
	}
	
	cout<<"El factorial es: "<<factorial;
}
