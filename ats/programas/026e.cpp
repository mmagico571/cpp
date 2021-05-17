//Programa que realiza la suma de factoriales
#include<iostream>
using namespace std;

int main(){
	int numero, factorial=1, sumaFactorial=0, n;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	n=numero;
	
	for(int j=1;j<=n;j++){
		for(int i=1;i<=numero;i++){
			factorial=factorial*i;
			
		}
		sumaFactorial=sumaFactorial+factorial;
		numero=numero-1;
		cout<<"factorial "<<factorial<<endl;
		factorial=1;
	}
	
	cout<<"sumaFactorial: "<<sumaFactorial;
	
}
