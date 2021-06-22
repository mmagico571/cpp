//Programa 3.16
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	double hidronio, nivelph;
	
	cout<<"Introdusca la concentracion de iones de hidronio: ";
	cin>>hidronio;
	nivelph=-log10(hidronio);
	
	cout<<"El nivel de ph es: "<<nivelph;
}
