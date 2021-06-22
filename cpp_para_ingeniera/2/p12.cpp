//Programa 2.12
#include<iostream>
using namespace std;
int main(){
	double velocidad, f0, f1;
	f0 = 2e-10;
	f1 = 20000004e-10;
	velocidad = 6.685e8 * (f1 - f0) / (f1 + f0);
	cout<<"la velocidad es : "<<velocidad<<" millas / hora";
}
