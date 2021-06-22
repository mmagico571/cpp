/**/
#include<iostream>
using namespace std;
int main(){
	char letra;
	
	cout<<"ingrese una letra: ";
	cin>>letra;
	
	switch(letra){
		case 'a': cout<<"vocal minuscula"; break;
		case 'e': cout<<"vocal minuscula"; break;
		case 'i': cout<<"vocal minuscula"; break;
		case 'o': cout<<"vocal minuscula"; break;
		case 'u': cout<<"vocal minuscula"; break;
		case 'A': cout<<"vocal mayuscula"; break;
		case 'E': cout<<"vocal mayuscula"; break;
		case 'I': cout<<"vocal mayuscula"; break;
		case 'O': cout<<"vocal mayuscula"; break;
		case 'U': cout<<"vocal mayuscula"; break;
		default: cout<<"No es vocal";
	}
}
