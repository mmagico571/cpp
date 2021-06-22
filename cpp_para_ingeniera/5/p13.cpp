//Programa 5.13
//Este programa calcula las sumas positivas 
//y negativas de una serie de numeros
#include<iostream>
using namespace std;

int main(){
	int num=0, sumPos=0, sumNeg=0;
	const int MAX=5;
	
	for(int i=1;i<=MAX;i++){
		cout<<"Ingrese un numero: ";
		cin>>num;
		if(num==0){
			;
		}else if(num>0){
			sumPos=sumPos+num;
		}else{
			sumNeg=sumNeg+num;
		}
	}
	
	cout<<"sumPos = "<<sumPos<<endl;
	cout<<"sumNeg = "<<sumNeg;
	
}
