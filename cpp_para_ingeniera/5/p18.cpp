//Programa 5.18
#include<iostream>
using namespace std;

int main(){
	const int NUMCALIF=4;
	const int NUMESTUDIANTES=3;
	double calificacion, total, promedio;
	int i,j ;
	for(i=1;i<=NUMESTUDIANTES;i++){
		total=0;
		for(j=1;j<=NUMCALIF;j++){
			cout<<"Estudiante: "<<i<<" NCal: "<<j<<" Calificacion: ";
			cout<<endl;
			cin>>calificacion;
			total=total+calificacion;
		}
		promedio=total/NUMCALIF;
		cout<<"Promedio "<<promedio<<endl;
	}
	
}
