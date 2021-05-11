/*Escribe un programa que lea 3 numeros y despues un cuarto
e indicar si el numero coincide con alguno de los anteriores*/
#include<iostream>
using namespace std;
int main(){
	int num1, num2, num3, num4;
	
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	cout<<"Ingrese el tercer numero: ";
	cin>>num3;
	cout<<"Ingrese el cuarto numero: ";
	cin>>num4;
	
	if((num1==num4) || (num2==num4) || (num3==num4)){
		cout<<"Son iguales";
	}else{
		cout<<"Son diferentes";
	}
}
