/*Mayor elemento del vector*/
#include<iostream>
using namespace std;

int main(){
	int elementos;
	cout<<"Ingrese el numero de elementos del vector: "	;
	cin>>elementos;
	int vector[elementos];
	int mayor;
	
	for(int i=0;i<elementos;i++){
		cout<<"Ingrese el elemento "<<i<<": ";
		cin>>vector[i];
	}
	mayor=vector[0];
	
	for(int i=0;i<elementos;i++){
		if(vector[i]>mayor){
			mayor=vector[i];
		}
	}
	
	cout<<"El mayor es: "<<mayor;
}
