/*e2.7.3
Modifique el programa 2.13 para calcular y desplegar el número total de líneas
necesario para conectar 1000 teléfonos individuales en forma directa entre sí.
Compile y ejecute el programa escrito para el ejercicio 3a en una computadora.
El número de líneas directas necesarias para mantener una red conectada en forma directa
para n
teléfonos está dado por la fórmula:
líneas = n(n – 1)/2

*/
#include<iostream>
using namespace std;
int main(){
float numeroDeTelefonos=1000;
float numeroDeLineas=0;
numeroDeLineas = numeroDeTelefonos * (numeroDeTelefonos - 1) / 2;
cout<<"El numero de lineas es: "<<numeroDeLineas;
}
