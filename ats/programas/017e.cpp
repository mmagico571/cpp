/*pedir un numero de 1 al 12 y mostrar el mes corresondiente*/
#include<iostream>
using namespace std;
int main(){
	int mes;
	
	cout<<"Ingrese un numero del 1 al 12: ";
	cin>>mes;
	
	switch(mes){
		case 1: cout<<"Enero"; break;
		case 2: cout<<"Febrero"; break;
		case 3: cout<<"Marzo"; break;
		case 4: cout<<"Abril"; break;
		case 5: cout<<"Mayo"; break;
		case 6: cout<<"Junio"; break;
		case 7: cout<<"Julio"; break;
		case 8: cout<<"Agosto"; break;
		case 9: cout<<"Septiembre"; break;
		case 10: cout<<"Octubre"; break;
		case 11: cout<<"Noviembre"; break;
		case 12: cout<<"diciembre"; break;
		default: cout<<"Fuera de rango";
	}
}
