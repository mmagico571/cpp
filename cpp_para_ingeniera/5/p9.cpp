//Programa 5.9
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	const int CUENTAMAX = 5;
	int cuenta;
	
	cout<<"NUMERO	RAIZ"<<endl
		<<"------	----"<<endl;
	
	for(cuenta = 1;cuenta<=CUENTAMAX;cuenta++){
		cout<<cuenta<<"	"<<sqrt(double(cuenta))<<endl;
	}
}
