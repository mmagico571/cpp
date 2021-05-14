//Programa 4.2
//programa para conversion de temperaturas
#include<iostream>
using namespace std;

int main(){
		char tiempo;
		double temp, fahren, celcius;
		
		cout<<"Introdusca la temperatura: ";
		cin>>temp;
		cout<<"Introdusca f para fahrenheid"<<endl
			<<"Introdusca c para celcius"<<endl;
		cin>>tiempo;
		
		if((tiempo!='f')&&(tiempo!='c')){
			cout<<"opccion incorrecta";
		}else if(tiempo=='f'){
			celcius=(5/9)*(temp-32);
			cout<<"La temperatura celcius es "<<celcius;
		}else{
			fahren=(9/5)*temp+32;
			cout<<"La temperatura fahrenheid es "<<fahren;
		}
}









