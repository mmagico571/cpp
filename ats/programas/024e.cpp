//Escriba un programa que calcule xy sin utilizar pow()
#include<iostream>
using namespace std;

int main(){
	int y,potencia=0, x;
	
	cout<<"Ingrese un numero: ";
	cin>>x;
	cout<<"Ingrese la potencia: ";
	cin>>y;
	potencia=x*x;	
	if(y==0){
		potencia = 1;
	}else if(y>0){
		for(int i = 2;i<=y-1;i++){
		potencia=potencia*x;
		}
	}else{
		cout<<"el valor de la potencia es invalido";
	}
	
	cout<<potencia;
}
