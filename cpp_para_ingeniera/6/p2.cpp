//programa 6.2: Programa que utiliza una funcion para calcular su raiz cuadrada
#include<iostream>
#include<cmath>
using namespace std;

double raiz(double);

int main(){
	cout<<"La raiz de 10 es: "<<raiz(10)<<endl;
}

double raiz(double numero){
	return(sqrt(numero));
}
