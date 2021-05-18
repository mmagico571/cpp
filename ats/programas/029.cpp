/*realice un programa que selicite al usuario un numero entero
entre 1 y 100. El programa debe de generar un numero aleatorio
en ese mismo rango, e indicar al usuario que ese numero que digito es menor o mayor
al numero aleatorio, asi hasta que lo adivine y oir ultimo mostrarle el numero
de intentos*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	
	int intentos=0, numero=0, aleatorio=0;
	
	srand(time(NULL));
	aleatorio=1 + rand()%(100);
	cout<<aleatorio<<endl;
	
	do{
		cout<<"ingrese un numero: ";
		cin>>numero;
		if(numero>aleatorio){
		cout<<"mayor al aleatorio"<<endl;
		}else if(numero<aleatorio){
		cout<<"menor al aleatorio"<<endl;
		}
		intentos++;
	}while(numero!=aleatorio);
	
	cout<<"Intentos: "<<intentos<<endl;
	system("pause");
}
