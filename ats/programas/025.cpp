//programa que calcula el valor de 1+2+3+4+5+...+n
#include<iostream>
using namespace std;

int main(){
	int n, suma=0;
	
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	
	for(int numero=1;numero<=n;numero++){
		suma = suma +numero;
	}
	cout<<"suma "<<suma;
}
