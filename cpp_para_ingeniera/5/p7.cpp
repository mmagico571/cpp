//Programa 5.7
#include<iostream>
using namespace std;

int main(){
	const int MAXNUMS=4;
	double num, total;
	int contador;
	
	contador = 1;
	total = 0;
	
	while(contador<=MAXNUMS){
		cout<<"Ingrese un numero: ";
		cin>>num;
		total = total + num;
		contador++;
	}
	
	cout<<"total "<<total<<endl;
	cout<<"Promedio "<<(total/MAXNUMS);
	
}
