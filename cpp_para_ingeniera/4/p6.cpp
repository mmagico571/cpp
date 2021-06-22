//Programa 4.6
#include<iostream>
using namespace std;

int main(){
	int out;
	double peso;
	
	cout<<"Ingrese el peso: ";
	cin>>peso;
	
	if(peso>=90){
		out=90;
	}else if(peso>=80){
		out=80;
	}else if(peso>=70){
		out=70;
	}else if(peso>=60){
		out=60;
	}else{
		out=0;
	}
	
	cout<<"out = "<<out;
}







