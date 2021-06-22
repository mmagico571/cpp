//Programa que lee cada 4 horas la temperatura calcula la media.
//calcula la temperatura mas baja y la temperatura mas alta;
#include<iostream>
using namespace std;

int main(){
	float baja=99999999, alta=0, media=0, temperatura, total, horas;
	total = 0;
	for(horas=4;horas<=24;horas=horas+4){
		cout<<"Registre la temperatura de las "<<horas<<": ";
		cin>>temperatura;
		total = total + temperatura;
		if(temperatura>alta){
			alta = temperatura;
		}else{
			alta = alta;
		}
		
		if(temperatura<baja){
			baja=temperatura;
		}else{
			baja=baja;
		}
	}
	
	media = total / 6;
	cout<<"La temperatura media = "<<media<<endl;
	cout<<"La temperatura mas baja es: "<<baja<<endl;
	cout<<"La temperatura mas altas es: "<<alta;
}
