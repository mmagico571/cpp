//Programa 3.17
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	
	double x, val_fun, aprox, diferencia;
	
	cout<<"Introdusca el valor de x: ";
	cin>>x;
	
	cout<<"e a la x		Aproximacion 		diferencia"<<endl;
	cout<<"--------		------------		----------\n";
	
	//primera aproximacion
	aprox = 1;
	diferencia = abs(val_fun-aprox);
	cout<<showpoint
		<<setw(10)<<val_fun
		<<setw(18)<<aprox
		<<setw(18)<<diferencia<<endl;
		
	//segunda aproximacion
	aprox = aprox + x;
	diferencia = abs(val_fun-aprox);
	cout<<showpoint
		<<setw(10)<<val_fun
		<<setw(18)<<aprox
		<<setw(18)<<diferencia<<endl;
		
	//tercera aproximacion
	aprox = aprox + pow(x,2)/2;
	diferencia = abs(val_fun-aprox);
	cout<<showpoint
		<<setw(10)<<val_fun
		<<setw(18)<<aprox
		<<setw(18)<<diferencia<<endl;
		
	//cuarta aproximacion
	aprox = aprox + pow(x,3)/6;
	diferencia = abs(val_fun-aprox);
	cout<<showpoint
		<<setw(10)<<val_fun
		<<setw(18)<<aprox
		<<setw(18)<<diferencia<<endl;
}
