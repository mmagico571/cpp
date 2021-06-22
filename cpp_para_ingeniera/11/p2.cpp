//Programa 11.2
#include<iostream>
using namespace std;

int main(){
	const int MAX=5;
	float temp[MAX];
	float suma=0;
	
	for(int i=0;i<MAX;i++){
		cout<<"Ingrese la temperatura "<<i<<": ";
		cin>>temp[i];
	}
	
	for(int i=0;i<MAX;i++){
		suma=suma+temp[i];
	}
	
	cout<<"Suma: "<<suma;
}
