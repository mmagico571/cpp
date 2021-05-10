/**/
#include<iostream>
using namespace std;
int main(){
	int numero, dato = 5;
	cout<<"ingrese un numero: ";
	cin>>numero;
	
	if(numero == dato){
		cout<<"El numero es igual 5"<<endl;
	}else{
		cout<<"el numero es desigual de 5"<<endl;
	}
	
	if(numero != dato){
		cout<<"El numero es diferente de 5"<<endl;
	}else{
		cout<<"El numero no es diferente de 5"<<endl;
	}
	
	if(numero < dato){
		cout<<"El numero es menor a 5"<<endl;
	}else{
		cout<<"El numero no es menor a 5"<<endl;
	}
	
	if(numero > dato){
		cout<<"El numero es mayor a 5"<<endl;
	}else{
		cout<<"el numero no es mayor de 5"<<endl;
	}
	
	if(numero <= dato){
		cout<<"El numero es menor igual a 5"<<endl;
	}else{
		cout<<"El numero no es menor igual a 5"<<endl;
	}
	
	if(numero >= dato){
		cout<<"El numero es mayor igual a 5"<<endl;
	}else{
		cout<<"el numero no es mayor igual de 5"<<endl;
	}
}
	

