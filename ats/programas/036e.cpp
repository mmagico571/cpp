/*Realiza un programa que defina una matriz de 3x3 y esscriba
un ciclo para mostrar la diagonal principal*/
#include<iostream>
using namespace std;

int main(){
	int matriz[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(int i=0;i<3;i++){
		cout<<matriz[i][i]<<"	";
	}
}
