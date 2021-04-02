//programa que calacula la expresion (a+b)/(c+d) y muestr el resultado
#include<iostream>
using namespace std;
int main(){
	float a,b,c,d,resultado;
	cout<<"ingrese el valor de a: ";
	cin>>a;
	cout<<"ingrese el valor de b: ";
	cin>>b;
	cout<<"ingrese el valor de c: ";
	cin>>c;
	cout<<"ingrese el valor de d: ";
	cin>>d;
	resultado=(a+b)/(c+d);
	cout<<"el resultado es: "<<resultado;
}
