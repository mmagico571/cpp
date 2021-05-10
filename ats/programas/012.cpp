/*Sentencia switch*/
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Ingrese un numero entre 1 y 5: ";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"uno"; break;
		case 2: cout<<"dos"; break;
		case 3: cout<<"tres"; break;
		case 4: cout<<"cuatro"; break;
		case 5: cout<<"cinco"; break;
		default: cout<<"Fuera de rango";
	}
	
}
