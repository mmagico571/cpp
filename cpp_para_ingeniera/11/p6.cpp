//Programa 11.6
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

	const int NUMELEMENTOS = 100;
	int i, numVoltios=0;
	double voltio[NUMELEMENTOS];
	double promedio, desvest;
	double sumavoltios = 0, sumadesv = 0;

	cout<<"Ingrese el numero de voltajes que se van a analizar: ";
	cin>>numVoltios;

	//lee los voltajes de entrada y los totaliza
	for(i=0;i<numVoltios;i++){
		cout<<"Ingrese el valor del voltaje "<<i+1<<": ";
		cin>>voltio[i];
		sumavoltios = sumavoltios + voltio[i];
	}

	//calcula y despliega el promedio
	promedio = sumavoltios / numVoltios;
	cout<<fixed<<setprecision(8)<<"El promedios es: "<<promedio<<endl;

	//calcula y despliega la desviacion estandar
	for(i=0;i<numVoltios;i++){
	sumadesv = sumadesv + pow(voltio[i] - promedio ,2);
	}
	desvest = sqrt(sumadesv / numVoltios);
	cout<<"La desviacion es: "<<desvest<<endl;
}
