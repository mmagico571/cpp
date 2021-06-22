/*
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	
	int filas, columnas;
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;
	int matriz[filas][columnas];
	int i,j;
	srand(time(NULL));
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			matriz[i][j]= 1 + rand()%(100);
		}
	}
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<matriz[i][j]<<"	";
		}
		cout<<endl;
	}
	
}
