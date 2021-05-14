//Programa 4.5
#include<iostream>
using namespace std;

int main(){
	char codigo;
	
	cout<<"Introdusca un codigo de especificacion: ";
	cin>>codigo;
	
	if(codigo == 'S'){
		cout<<"Espacial";
	}else if(codigo == 'M'){
		cout<<"Militar";
	}else if(codigo == 'C'){
		cout<<"comercial";
	}else if(codigo == 'T'){
		cout<<"Toy";
	}else{
		cout<<"Codigo Invalido";
	}
}
