//Programa 11.1
#include<iostream>
using namespace std;

int main(){
	const int MAX=5;
	float temp[MAX];
	
	for(int i=0; i<MAX;i++){
		cout<<"Ingrese el valor de la temperatura "<<i<<": ";
		cin>>temp[i];
	}
	
	for(int i=0;i<MAX;i++){
		cout<<"temperatura "<<i<<"--"<<temp[i]<<endl;
	}
}
