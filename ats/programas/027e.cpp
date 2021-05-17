//calcular la exprecion 1-2+3-4+5-6...n
#include<iostream>
using namespace std;

int main(){
	int numero, pares=0, impares=0;
	cout<<"ingrese un numero: ";
	cin>>numero;
	
	for(int i=1;i<=numero;i++){
		if(i%2==0){
			pares=pares+i;
		}else{
			impares=impares+i;
		}
	}
	cout<<impares<<endl;
	cout<<pares<<endl;
	cout<<"El resultado de la exprecion es: "<<impares-pares;
	
	
}
