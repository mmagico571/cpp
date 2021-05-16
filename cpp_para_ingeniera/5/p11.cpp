//Programa 5.11
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	const int MAXNUMS = 10;
	int num;
	
	cout<<"NUMERO	CUADRADO	CUBO"<<endl;
	cout<<"------	--------	----"<<endl;
	
	for(int num=1; num<=MAXNUMS; num++){
		cout<<num<<"	"
			<<num*num<<"		"
			<<num*num*num<<endl;
	}
}
