/*programa que solicita el precio estandard de un propucto
y muestre en su salida el precio del producto al aplicarle el iva*/
#include<iostream>
using namespace std;
int main(){
	float precioProductoSinIVA,  precioProductoConIVA, iva=1.16;
	cout<<"ingrese el precion de un producto: $";
	cin>>precioProductoSinIVA;
	precioProductoConIVA=precioProductoSinIVA * iva;
	cout<<"El precio del producto con iva es: $"<<precioProductoConIVA;
}
