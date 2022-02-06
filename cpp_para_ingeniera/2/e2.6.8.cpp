//e2.6.8
/*Considere el siguiente problema de programación: la fórmula para la desviación nor-
mal estándar, z, usada en aplicaciones estadísticas es
z = (x − u) / g
donde u se refiere a un valor medio y σ a una desviación estándar. Usando esta fórmu-
la, escriba un programa que calcula y despliega el valor de la desviación normal es-
tándar cuando x = 85.3, u = 80 y g = 4.
 * */
#include<iostream>
using namespace std;

int main(){
	//salidas
	float z;
	//Entradas
	float x = 85.3;
	float u = 80;
	float g = 4;
	//operaciones
	z = (x-u)/g;
	//salida en pantalla
	cout<<"La desviacion normal estandar calculada es "<<z;
}
