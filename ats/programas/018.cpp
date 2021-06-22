/*Hacer un programa que simule un cajero automatico
con saldo inicial de $1000*/
#include<iostream>
using namespace std;
int main(){
	int saldoInicial = 1000, opcion;
	float ingreso, egreso, saldoActual;
	
	cout<<"1. Ingresar"<<endl;
	cout<<"2. Retirar"<<endl;
	cout<<"3. Salir"<<endl;
	
	cout<<"Seleccione una opccion del menu: ";
	cin>>opcion;
	
	switch(opcion){
		case 1: 
			cout<<"Digite la cantidad a ingresar: ";
			cin>>ingreso;
			saldoActual = saldoInicial + ingreso;
			cout<<"Su saldo Actual es $ "<<saldoActual;
			break;
		case 2:
			cout<<"Ingrese la cantidad a retirar: ";
			cin>>egreso;
			if(saldoInicial < egreso){
				cout<<"Saldo insuficiente";
			}else{
				saldoActual = saldoInicial - egreso;
				cout<<"Su saldo Actual es $ "<<saldoActual;	
			}
			break;
		case 3: exit;
		default: cout<<"valor fuera de rango";
	}
	
}
