//Cadenas de caracteres

#include<iostream>
//#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char palabra[]="hola mundo";
	char palabra1[]={'h','o','l','a'};
	int longitud=3;
	char palabra2[longitud];
	
	cout<<"La palabra es: "<<palabra<<endl;
	cout<<"La palabra1 es: "<<palabra2<<endl;
	cout<<"Escribe una palabra: ";
	cin.getline(palabra2,longitud,'\n');
	cout<<"------"<<endl;
	cout<<"La palabra2 es: "<<palabra2<<endl;
}
