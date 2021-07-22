/*Escribe un programa que defina un vector de numeros y calcule si existe un numero
en el vector equivalente a la suma del resto de los numeros del vector
*/
#include<iostream>
using namespace std;

int main(){
	int elementos;
	cout<<"Ingrese el numero de elemetos del vector: ";
	cin>>elementos;
	int vector[elementos];
	int suma=0,i,j;
	
	for(int i=0;i<elementos;i++){
		cout<<"Ingrese el valor de elemento "<<i<<": ";
		cin>>vector[i];
	}
	
	for (i=0;i<elementos;i++){
		for(j=0;j<elementos;j++){
			if(j!=i){
				suma=suma+vector[j];
			}
		}
		cout<<"suma: "<<suma<<endl;
		if(suma==vector[i]){
			cout<<"El elemento "<<i<<" es igual a la suma del resto del vector"<<endl;
		}
		suma=0;
		
	}
	
	
}
