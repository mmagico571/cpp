/*programa eu lee numeros hasta que se introduce cero, contando la cantidad
de numeos mayores a cero leidos*/
#include<iostream>
using namespace std;
int main(){
		
		int numero, i;
		
		i=-1;
		
		do{
			cout<<"ingrese un numero: ";
			cin>>numero;
			i++;
		}while(numero!=0);
	
		cout<<"# "<<i;
}
