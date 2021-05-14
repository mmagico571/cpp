//Programa 4.3
//verificador de millas
#include<iostream>
using namespace std;

int main(){
	const int MILLAS = 3000;
	int num_Id;
	double millas;
	
	cout<<"Introdusca el numero del automovil: ";
	cin>>num_Id;
	cout<<"Introsudca las millas recorridas: ";
	cin>>millas;
	
	if(millas>MILLAS){
		cout<<"El automovil "<<num_Id<<" esta arriba del limite";
	}else{
		cout<<"Buen viaje";
	}
}
