//Programa 5.5
#include<iostream>
using namespace std;

int main(){
	const int MAXNUMS = 4;
	int cuenta;
	double num;
	
	cout<<"Esta programa le pedira que ingrese "
		<<MAXNUMS<<" numeros"<<endl;
	cuenta=1;
	while(cuenta<=MAXNUMS){
		cout<<"Introdusca un numero: ";
		cin>>num;
		cout<<"El numero es: "<<num<<endl;
		cuenta++;
	}
}
