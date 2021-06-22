/*Programa que muestra la matriz tranpuesta*/
#include<iostream>
using namespace std;

int main(){
	int matriz1[3][3]={1,2,3,4,5,6,7,8,9};
	int matriz2[3][3];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matriz2[j][i]=matriz1[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matriz2[i][j]<<" 		";
		}
		cout<<endl;
	}
}
