/*Realice un programa que calcule las soluciones de una ecuacion de 
segundo grado de la forma ax^2+bx+c=0 teniendo en cuanta que:
x=(-b+-raiz(b^2-4ac))/(2a)
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x1, x2, a, b, c;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"Ingrese el valor de c: ";
	cin>>c;
	x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
	cout<<"El valor de X1: "<<x1;
	cout<<endl;
	cout<<"El valor de X2: "<<x2;
	//probando con x1
	float px1;
	px1=(a*pow(x1,2))+(b*x1)+c;
	cout<<endl;
	cout<<"probando con x1: "<<px1;
	//probando con x2
	float px2;
	px2=(a*pow(x2,2))+(b*x2)+c;
	cout<<endl;
	cout<<"probando con x2: "<<px2;
}
