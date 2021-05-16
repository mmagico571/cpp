//Programa 5.12
//Este programa calcula el promedio de CUENTAMAX
#include<iostream>
using namespace std;

int main(){
	const int CUENTAMAX = 4;
	int cuenta;
	double num, total, promedio;
	
	total = 0;
	
	for(cuenta =1; cuenta<=CUENTAMAX;cuenta++){
		cout<<"Introdusca un numero: ";
		cin>>num;
		
		total=total+num;
		
	}
	promedio = total / CUENTAMAX;
	cout<<"El promedio de los datos introducidos es "<<promedio;
	
}
