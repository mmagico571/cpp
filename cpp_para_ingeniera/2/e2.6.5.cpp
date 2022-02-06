//e2.6.5
/*Escriba un programa en C++ para determinar la distancia recorrida por un automó-
vil después de 10 segundos, suponiendo que el automóvil viaja inicialmente a 60 mi-
llas por hora y el conductor aplica los frenos para desacelerar de manera uniforme a
una velocidad de 12 millas/s 2 . Use el hecho que distancia = s – (1/2)dt, donde s es la
velocidad inicial del automóvil, d es la desaceleración y t es el tiempo transcurrido.
 * */
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//salidas
	float distancia = 0;
	//Entradas
	float velocidadInicial = 60;
	float desaceleracion = 12;
	float tiempo = 100;
	//operaciones
	distancia = velocidadInicial - 0.5 * desaceleracion * pow(tiempo,2);
	//salida en pantalla
	cout<<"La distancia recorrida es :"<<distancia;
}
