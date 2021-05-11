//Programa 2.11
#include<iostream>
using namespace std;
int main(){
	double resistividad, area, longitud, resistencia;
	resistividad = 10.4;
	area = 500;
	longitud = 125;
	
	resistencia = (resistividad * longitud) / area;
	cout<<"resistencia = "<<resistencia;
}
