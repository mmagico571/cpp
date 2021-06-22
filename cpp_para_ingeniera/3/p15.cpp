//Programa 3.15
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	const double PI = 3.1416;
	const double GRAD_A_RAD = PI/180;
	double angulo;
	
	cout<<"Introdusca el angulo en grados: ";
	cin>>angulo;
	
	cout<<fixed<<setprecision(4)
		<<"El angulo es "<<sin(angulo * GRAD_A_RAD);
	
}
