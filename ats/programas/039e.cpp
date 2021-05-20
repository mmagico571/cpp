/*Realice un programa que calcule el producto de 2 matrices cuadradas de 3*3*/
#include<iostream>
using namespace std;

int main(){
	int m,i,j,k,l,suma=0;
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	
	//captura de valores para la matriz1 y matriz2
	for(m=1;m<=2;m++){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				cout<<"Para la matriz"<<m<<" ingrese el valor de "<<i<<"-"<<j<<": ";
				if(m==1){
					cin>>matriz1[i][j];
				}else{
					cin>>matriz2[i][j];
				}
			}
		}
	}
	//*********************************
	//producto de las matrices 1 y 2
	
	//Multiplicando las matrices
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				for(int k=0;k<3;k++){
					for(l=0;l<3;l++){
						suma = suma +(matriz1[i][l]*matriz2[l][k]);		
					}
					matriz3[i][k] = suma;
					suma=0;
			}
		}
	}
	//*********************************
	//mostrar las matrices	
	for(m=1;m<=3;m++){
		cout<<"------- Matriz"<<m<<"------------"<<endl;
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				if(m==1){
					cout<<matriz1[i][j]<<"  ";
				}
				if(m==2){
					cout<<matriz2[i][j]<<"  ";
				}
				if(m==3){
					cout<<matriz3[i][j]<<"  ";
				}
			}
			cout<<endl;
		}
	}
}
