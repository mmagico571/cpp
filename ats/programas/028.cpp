//imprimir la serie de fibonacci
#include<iostream>
using namespace std;

int main(){
	int n,a=1,b=1,c=0;
	cout<<"Ingrese el valor de n: ";
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
	for(int i=1;i<=n-2;i++){
		c=a+b;
		a=b;
		b=c;
		cout<<c<<endl;	
	}
	
}
