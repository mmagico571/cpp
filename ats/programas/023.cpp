//Realice un programa que calcule y muestre en la salida
//la suma de los cuadrados de los primeros 10 numeros mayores a 0;
#include<iostream>
using namespace std;

int main(){
	
	float suma, cuadrado;
	suma=0;
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		cout<<"i	"<<i<<"		"<<cuadrado<<endl;
		suma=suma+cuadrado;
	}
	cout<<"La suma es: "<<suma<<endl;
	system("pause");
}
