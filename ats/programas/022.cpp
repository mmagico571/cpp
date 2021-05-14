/*imprimir la tabla de multiplicar de un numero*/
#include<iostream>
using namespace std;
int main(){
	
	int numero, i;
	
	do{
		cout<<"Ingresa un numero: ";
	cin>>numero;
	}while((numero<1)||(numero>10));
	
	for(i=1;i<=10;i++){
		cout<<numero<<" * "<<i<<" = "<<(numero*i)<<endl;
	}
	
	i=1;
	
	while(i<=10){
		cout<<numero<<" * "<<i<<" = "<<(numero*i)<<endl;
		i++;
	}
	
	i = 1;
	
	do{
		cout<<numero<<" * "<<i<<" = "<<(numero*i)<<endl;
		i++;
	}while(i<=10);
}
