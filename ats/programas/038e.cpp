/*Programa que calcula la suma de dos matrices de 3x3*/
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	int i,j;
	srand(time(NULL));
	//llenado matriz 1 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz1[i][j]=1+rand()%(10);
		}
	}
	
	//llenado matriz 2 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz2[i][j]=1+rand()%(10);
		}
	}
	
	//calculo matriz 3
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz3[i][j]=	matriz1[i][j]+	matriz2[i][j];
		}
	}
		
	//mostrar matriz1
	cout<<"------M1-------"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matriz1[i][j]<<"	";
		}
		cout<<endl;
	}
	
	//mostrar matriz2
	cout<<"------M2-------"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matriz2[i][j]<<"	";
		}
	cout<<endl;
	}
	
	//mostrar matriz1
	cout<<"------M3-------"<<endl;
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		cout<<matriz3[i][j]<<"	";
	}
	cout<<endl;
	}
}
