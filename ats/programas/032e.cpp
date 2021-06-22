/*Programa que solicita los elementos de un vector
y el programa los muestra en orden inverso*/
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese el numero de elementos del vector: ";
	cin>>n;
	int vector[n];
	
	for(int i=0;i<n;i++){
		cout<<"ingrese el elemento "<<i<<": ";
		cin>>vector[i];
	}
	
	for(int i=(n-1);i>=0;i--){
		cout<<i<<"->"<<vector[i]<<endl;
	}
	
	
	
	
	
}
