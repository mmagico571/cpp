//Programa 5.3
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int num;
	
	cout<<"NUMERO	CUADRADO	CUBO"<<endl;
	cout<<"------	--------	----"<<endl;
	
	num = 1;
	
	while(num<11){
		cout<<setw(3)<<num<<"	   "
			<<setw(3)<<num*num<<"		"
			<<setw(3)<<num*num*num<<endl;
		num++;
	}
	
}
