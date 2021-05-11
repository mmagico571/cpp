//Programa 2.13
#include<iostream>
using namespace std;
int main(){
	int num1, num2, lin1, lin2;
	num1 = 100;
	num2 = 110;
	lin1 = num1 * (num1 - 1)/2;
	lin2 = num2 * (num2 - 1)/2;
	cout<<"El numero inicial de lineas es: "<<lin1<<endl;
	cout<<"se nececitan: "<< lin2 - lin1<<" lineas adicionales";
}
