//e2.6.6
/*Considere el siguiente problema de programación: en 1627, la isla de Manhattan fue
vendida a los colonizadores holandeses por aproximadamente 24 dólares. Si las ga-
nancias de esa venta se hubieran depositado en un banco holandés que pagara 5%
de interés anual compuesto, ¿cuál sería el saldo principal al final de 2002? Se requie-
re un despliegue como sigue: El saldo al 31 de diciembre de 2002 es: xxxxxx, donde
xxxxxx es la cantidad calculada por su programa.
capitalFinal = capitalInicial * (1 + pow((interes / 100),tiempo))
 * */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	//salidas
	double capitalFinal=0;
	//Entradas
	double capitalInicial = 24;
	double interes = 1+5.0/100;
	//operaciones
	int fin = 2002;
	int inicio = 1627;
	int tiempo = fin - inicio;
	cout<<inicio<<"---"<<capitalInicial<<endl;
	/*for(int i=1; i<=tiempo; i++){
		capitalFinal =capitalInicial * (1.0 + interes);
		capitalInicial = capitalFinal;
		cout<<inicio + i<<"---"<<fixed<<setprecision(2)<<capitalFinal<<endl;
	}*/
	capitalFinal = capitalInicial * (pow(interes,tiempo));
	//salida en pantalla
	cout<<"El saldo al 31 de diciembre de 2002 es: "<<fixed<<capitalFinal<<", donde "
		<<capitalFinal - capitalInicial<<" es la cantidad calculada por su programa.";
}
