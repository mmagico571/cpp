//Programa 5.16
#include<iostream>
using namespace std;

int main(){
	int num, final;
	
	cout<<"Introdusca el numero final de elementos ";
	cin>>final;
	
	for(num=0;num<=final;num++){
		cout<<num<<"	"
			<<num*num<<"	"
			<<num*num*num<<endl;
	}
}
