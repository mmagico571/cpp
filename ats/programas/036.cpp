/*Hacer un programa para rellenar una matriz pidiendo al usuario
el numero de filas y de columnas, y mostrar la matriz en pantalla*/
#include<iostream>
using namespace std;

int main(){
	int filas=0; int columnas=0;
	int i, j;
	
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;
	
	int matriz[filas][columnas];
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"Ingrese el elmento "<<i<<"-"<<j<<": ";
			cin>>matriz[i][j];
		}
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"	";
		}
		cout<<endl;
	}	
}
