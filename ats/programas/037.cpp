/*hacer una matriz de tipo entera de 2x2, llenarla de numeros
y luego copiarla a otra matriz*/
#include<iostream>
using namespace std;

int main(){
	int matriz1[2][2];
	int matriz2[2][2];
	int i, j;
	//rellenar
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Ingrese el valor "<<i<<"-"<<j<<": ";
			cin>>matriz1[i][j];
		}
	}
	//copiar
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	
	//mostrar
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<matriz2[i][j]<<"	";
		}
		cout<<endl;
	}
}
