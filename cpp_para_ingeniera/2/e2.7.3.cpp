/*e2.7.3
Modifique el programa 2.13 para calcular y desplegar el n�mero total de l�neas
necesario para conectar 1000 tel�fonos individuales en forma directa entre s�.
Compile y ejecute el programa escrito para el ejercicio 3a en una computadora.
El n�mero de l�neas directas necesarias para mantener una red conectada en forma directa
para n
tel�fonos est� dado por la f�rmula:
l�neas = n(n � 1)/2

*/
#include<iostream>
using namespace std;
int main(){
float numeroDeTelefonos=1000;
float numeroDeLineas=0;
numeroDeLineas = numeroDeTelefonos * (numeroDeTelefonos - 1) / 2;
cout<<"El numero de lineas es: "<<numeroDeLineas;
}
