/*Programa que lee 5 numros en un vector,
los copia a un segundo arreglo multiplicados por 2
y los muestra*/
#include<iostream>
using namespace std;

int main(){
	
	int elementos;
	cout<<"Ingrese el numero de elementos: ";
	cin>>elementos;
	int vector1[elementos];
	int vector2[elementos];
	
	for(int i=0;i<elementos;i++){
		cout<<"Ingrese el elemento "<<i<<": ";
		cin>>vector1[i];
		vector2[i]=vector1[i]*2;
	}
	
	for(int i=0;i<elementos;i++){
		cout<<vector2[i]<<endl;
	}
	

}
