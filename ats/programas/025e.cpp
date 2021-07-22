//Escriba un programa que calcule 1+3+5+...+2n-1
#include<iostream>
using namespace std;

int main(){
	int n, suma = 0, sumando;
	
	cout<<"Introdusca un valor para n: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		sumando = (2 * i)-1;
		suma = suma + sumando;
		cout<<sumando<<endl;
	}
	cout<<endl<<"suma= "<<suma;
	
}
