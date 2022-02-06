/*e2.7.1
1. a. Modifique el programa 2.12 para calcular la velocidad de un automóvil cuya fre-
cuencia de retorno del radar es 2.00000035  10^10 sec^–1.
*/
#include<iostream>
using namespace std;

int main(){
	double velocidad, f0, f1;
	f0 = 2e-10;
	f1 = 20000004e-10;
	velocidad = 6.685e8 * (f1 - f0) / (f1 + f0);
	cout<<"la velocidad es : "<<velocidad<<" millas / hora";
}
