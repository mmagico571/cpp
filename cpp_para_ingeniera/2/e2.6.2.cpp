//e2.6.2
/*
Suponga que tiene que escribir un programa para calcular el valor de la distancia, en
millas, dada la relación:
distancia = velocidad * tiempo transcurrido
 */
#include<iostream>
using namespace std;

int main(){
	//salidas
	float distancia=0;
	//Entradas
	float velocidad;
	float tiempo;
	cout<<"Ingrese el valor de la velocidad en millas/hora: ";
	cin>>velocidad;
	cout<<"Ingrese el valor del tiempo en horas: ";
	cin>>tiempo;
	//operaciones
	distancia=velocidad * tiempo;
	//salida en pantalla
	cout<<"La distancia calculada es: "<<distancia<<" millas."<<endl;
	
/*¿Cómo debe modificarse el algoritmo que determinó en la parte anterior
 *  si el tiempotranscurrido se diera en minutos en lugar de horas?*/

//salidas
	distancia=0;
	//Entradas
	velocidad=0;
	tiempo=0;
	cout<<"Ingrese el valor de la velocidad en millas/hora: ";
	cin>>velocidad;
	cout<<"Ingrese el valor del tiempo en minutos: ";
	cin>>tiempo;
	//operaciones
	distancia=velocidad * (tiempo/60);
	//salida en pantalla
	cout<<"La distancia calculada es: "<<distancia<<" millas.";

}
