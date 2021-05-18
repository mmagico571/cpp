/*
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	const int FILAS=3;
	const int COLUMNAS=4;
	int numero[FILAS][COLUMNAS]={8,16,9,52,3,15,27,6,14,25,2,10};
	int i, j;
	
	for(i=0;i<FILAS;i++){
		for(j=0;j<COLUMNAS;j++){
			numero[i][j]=numero[i][j]*10;
		}
	}
	
	for(i=0;i<FILAS;i++){
		for(j=0;j<COLUMNAS;j++){
			cout<<setw(5);
			cout<<numero[i][j];
		}
		cout<<endl;
	}
	
}
