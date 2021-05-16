//Programa 4.9
//Calcula las raices de una ecuacion cuadratica;
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	double a, b, c, disc, r1, r2;
	
	cout<<"Este programa calcula las raices de una ecuacion cuadratica"
		<<endl<<"ax2 + bx + c = 0"<<endl;
		
	cout<<"Introdusca los valores para a, b y c:";
	cin>>a>>b>>c;
	
	if(a==0 && b == 0){
		cout<<"La ecuacion es degenerada y no tiene raices";
	}else if(a == 0){
		cout<<"La ecuacion tiene la raiz unica x = "
			<<-c/b;
	}else{
		disc = pow(b,2)-4*a*c; //calcula discriminante
		if(disc>0){
			disc = sqrt(disc);
			r1 = (-b+disc)/(2*a);
			r2 = (-b-disc)/(2*a);
			cout<<"Las dos raices son "<<r2<<" y "<<r1;
		}else if(disc<0){
			cout<<"ambas raices son negativas";
		}else{
			cout<<"Ambas raices son iguales a "<<-b/(2*a);
		}
	}
	
	
	
	
	
	
}
