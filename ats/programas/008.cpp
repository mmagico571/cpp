/*Programa que intercambia el valor de 2 variables*/
#include<iostream>
using namespace std;
int main(){
	float x,y,auxiliar;
	cout<<"Ingrese el valor de x: ";
	cin>>x;
	cout<<"Ingrese el valor de y :";
	cin>>y;
	auxiliar=x;
	x=y;
	y=auxiliar;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y;
	
}
