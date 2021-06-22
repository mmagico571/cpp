//Programa 5.10
#include<iostream>
using namespace std;

int main(){
	int cuenta;
	
	for(cuenta=2;cuenta<=20;cuenta=cuenta+2){
		cout<<cuenta<<endl;
	}
	
	cuenta =2;
	
	for(;cuenta<=20;cuenta=cuenta+2){
		cout<<cuenta<<endl;
	}
	
	cuenta=2;
	for(;cuenta<=20;){
		cout<<cuenta<<endl;
		cuenta = cuenta + 2;
	}
}
