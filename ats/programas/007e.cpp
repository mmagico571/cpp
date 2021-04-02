/*mostrar el ressultado de la expresion a+(b/(c-d))
*/
#include<iostream>
using namespace std;
int main(){
	float resultado,a,b,c,d;
	cout<<"ingrese el valor de a: ";
	cin>>a;
	cout<<"ingrese el valor de b: ";
	cin>>b;
	cout<<"ingrese el valor de c: ";
	cin>>c;
	cout<<"ingrese el valor de d: ";
	cin>>d;
	resultado=a+(b/(c-d));
	cout<<"El resultado es = "<<resultado;
	
}
