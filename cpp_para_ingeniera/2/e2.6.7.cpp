//e2.6.7
/*Escriba un programa que calcule y despliegue los voltajes de salida de dos circuitos
eléctricos y la suma de los dos voltajes. El voltaje de salida para el primer circuito es-
tá dado por la ecuación (150) V / 0.38f y el voltaje de salida para el segundo circui-
to está dado por la ecuación
230V / sqrt((56^2+(0.98f)^2))
donde V es el voltaje de entrada al circuito y f es la frecuencia en Hertz.
Pruebe el algoritmo escrito para la parte c usando la siguiente muestra de datos:
el primer circuito es operado con un voltaje de entrada de 1.2 voltios a una fre-
cuencia de 144 Hertz y el segundo circuito es operado con un voltaje de entrada
de 2.3 voltios a 100 Hertz.
 * */
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//salidas
	double voltajeSalida1 = 0;
	double voltajeSalida2 = 0;
	double voltajeTotal = 0;
	//Entradas
	double voltajeEntrada1 = 1.2;
	double frecuencia1 = 144.0;
	double voltajeEntrada2 = 2.3;
	double frecuencia2 = 100.0;
	//operaciones
	voltajeSalida1 = (150 * voltajeEntrada1) / (0.38 * frecuencia1);
	voltajeSalida2 = (230 * voltajeEntrada2) / (sqrt((pow(56,2)+pow((0.98 *frecuencia2),2))));
	//salida en pantalla
	cout<<"El voltaje de salida 1 es: "<<voltajeSalida1<<" volts"<<endl;
	cout<<"El voltaje de salida 2 es: "<<voltajeSalida2<<" volts"<<endl;
}
