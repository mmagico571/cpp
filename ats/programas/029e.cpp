//Realice un programa que calcule la descomposicion factorial de un numero
//en factores primos de un numero entero
#include<iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<endl;
			numero=numero/i;
		}
	}
	
}
