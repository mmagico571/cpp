//Programa 11.4
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	const int FILAS=3;
	const int COLUMNAS=4;	
	float numeros[FILAS][COLUMNAS]={8,16,9,52,3,15,27,6,14,25,2,10};
	int i,j;
	
	for(i=0;i<FILAS;i++){
		for(j=0;j<COLUMNAS;j++){
			cout<<setw(4)<<numeros[i][j];
		}
		cout<<endl;
	}
	
}
