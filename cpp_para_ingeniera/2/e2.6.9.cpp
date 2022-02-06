//e2.6.9
/*La ecuación de la curva normal (en forma de campana) usada en aplicaciones esta-
dísticas es
y = (1/(g * sqrt(2 * pi))* e^(pow(((x-u)/g),2)/2)
Pruebe el algoritmo escrito para la parte c suponiendo que u = 90, g = 4, x = 80
y pi = 3.141
 * */
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//salidas
	double y;
	//Entradas
	double u=90;
	double g=4;
	double x=80;
	double pi=3.1416;
	double e=2.7182;
	//operaciones
	y = (1/(g * sqrt(2 * pi))) * (pow(e,(-pow(((x-u)/g),2)/2)));
	//salida en pantalla
	cout<<"y = "<<y;
}
