//Programa 5.6
#include<iostream>
using namespace std;

int main(){
	const int MAXNUMS=4;
	int cuenta;
	double num, total;
	
	cout<<"este programa le solicitara "
		<<MAXNUMS<<" numeros"<<endl;
		
	cuenta=1;
	total=0;
	
	while(cuenta<=MAXNUMS){
		cout<<"Ingrese un numero: ";
		cin>>num;
		total=total+num;
		cuenta++;
	}
	cout<<"total "<<total;
}
