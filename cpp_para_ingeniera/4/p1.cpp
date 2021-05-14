//Programa 4.1
//calculo del area de un circulo
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	float radio, area;
	const float PI = 3.1416;
	
	cout<<"Ingrese el radio del circulo: ";
	cin>>radio;
	
	if(radio>0){
		area = PI * pow(radio,2);
		cout<<"El area es: "<<area;
	}else{
		cout<<"un radio negativo no es valido";
	}
	
}
