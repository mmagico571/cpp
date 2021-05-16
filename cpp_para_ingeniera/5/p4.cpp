//Programa 5.4
//programa para convertir celcuis a fahrenheid
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	const int MAX_CELCIUS = 50;
	const int VAL_INICIAL = 5;
	const int TAMANO_PASO = 5;
	
	int celcius;
	double fahren;
	
	cout<<"GRADOS		GRADOS"<<endl;
	cout<<"CELCIUS		FAHRENHEID"<<endl;
	cout<<"-------		----------"<<endl;
	
	celcius = VAL_INICIAL;
	
	cout<<setprecision(2);
		
	while(celcius<=MAX_CELCIUS){
		fahren =(9/6)*celcius+32;
		cout<<setw(4)<<celcius<<fixed
			<<setw(13)<<"	"<<fahren<<endl;
			celcius=celcius+TAMANO_PASO;
	}
	
	
}
