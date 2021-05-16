//Programa 5.8
#include<iostream>
using namespace std;

int main(){
	const int CALIF_ALTA=100;
	double calificacion, total;
	
	calificacion=0;
	total=0;
	cout<<"Para dejar de introducir calificaciones introdusca cualquie numero";
	cout<<endl<<"mayor de 100"<<endl;
	
	while(calificacion<=CALIF_ALTA){
		total = total + calificacion;
		cout<<"Introdusca una calificacion: ";
		cin>>calificacion;
	}
	
	cout<<"Total = "<<total;
}
