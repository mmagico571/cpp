//programa 4.8
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double num;
	
	cout<<"Porgrama que calcula: "<<endl
		<<"\t-Raiz cuadrada"<<endl
		<<"\t-Reciproco"<<endl
		<<"Introdusca un numero: ";
	cin>>num;
	
	if(num<0){
		cout<<"La raiz cuadrada de un numero negativo no existe"<<endl;
	}else{
		cout<<"raiz = "<<sqrt(num)<<endl;
	}
	
	if(num==0){
		cout<<"El reciproco de 0 no existe";
	}else{
		cout<<"Reciproco = "<<(1/num);
	}
}
