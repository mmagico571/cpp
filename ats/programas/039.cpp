/*Desarrollar un programa que determine si una matriz es simetrica o no.
una matriz es simetrica si es cuadrada y su es igual a su matriz transpuesta*/
#include<iostream>
using namespace std;

int main(){
	int filas, columnas;
	cout<<"Ingrese el numero de filas: ";
	cin>>filas;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas;
	int matriz1[filas][columnas];
	char bandera='F';
	int i,j;
	//captura elementos matriz
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<"Ingrese un valor para "<<i<<"-"<<j<<": ";
		cin>>matriz1[i][j];
		}
	}
	//compara matriz vs simetrica
	if(filas==columnas){
		for(i=0;i<filas;i++){
			for(j=0;j<columnas;j++){
				if(matriz1[i][j]==matriz1[j][i]){
					bandera='V';
				}
			}
		}
	}
	//veredicto bandera
	if(bandera == 'V'){
		cout<<"La matriz es simetrica";
	}else{
		cout<<"La matriz no es simetrica";
	}
}
