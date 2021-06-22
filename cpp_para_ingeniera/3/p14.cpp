//Programa 3.14
/*Este programa determina el peso de un cilindro de acero
dependiendo de su dencidad*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	const double PI = 3.1415;
	const double DENSIDAD = 0.284;
	double radio, altura, peso;
	cout<<"Introdusca el radio en pulgadas: ";
	cin>>radio;
	cout<<"Introdusca la altura en pulgadas: ";
	cin>>altura;
	
	peso=DENSIDAD*PI*pow(radio,2)*altura;
	
	cout<<fixed<<setprecision(6)<<"el peso es "<<peso<<" libras";
	
	
}
