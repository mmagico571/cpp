/*Realice un programa que calcule la expresion:
f(x,Y)=(raiz(x))/((y^2)-1)
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float resultado,x,y;
	cout<<"Ingrese el valor de x: ";
	cin>>x;
	cout<<"Ingrese el valor de y: ";
	cin>>y;
	resultado=(sqrt(x))/(pow(y,2)-1);
	cout<<"El resultado es: "<<resultado;
}
