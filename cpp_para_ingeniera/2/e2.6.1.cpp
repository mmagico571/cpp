//e2.6.1
/* Suponga que tiene que escribir un programa en C++ para calcular la resistencia total
de un circuito en serie. En dicho circuito la resistencia total es la suma de todos los
valores de resistencia individuales. Suponga que el circuito consiste en una cantidad
de resistores de 56 ohmios, 33 ohmios y 15 ohmios. */

#include<iostream>
using namespace std;

int main(){
	//salidas
	int resistenciaTotal=0;
	//Entradas
	int resistencia1=56;
	int resistencia2=33;
	int resistencia3=15;
	//operaciones
	resistenciaTotal=resistencia1+resistencia2+resistencia3;
	//salida en pantalla
	cout<<"La resistencia total calcula es: "<<resistenciaTotal;
}
