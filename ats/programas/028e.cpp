//
#include<iostream>
using namespace std;

int main(){
	const int NUMALUMNOS=5;
	int e1,e2,e3,calificacion;
	int aproboTodos=0;
	int alMenosUno=0;
	int ultimoExamen=0;
	
	
	for(int i=1;i<=NUMALUMNOS;i++){
		cout<<"Ingrese la calificacion 1 "<<" del alumno "<<i<<" : ";
		cin>>e1;
		cout<<"Ingrese la calificacion 2 "<<" del alumno "<<i<<" : ";
		cin>>e2;
		cout<<"Ingrese la calificacion 3 "<<" del alumno "<<i<<" : ";
		cin>>e3;
		cout<<"------------------------------------------------------\n";
		
		if(e1>=6&&e2>=6&&e3>=6){
			aproboTodos++;
		}
		if(e1>=6||e2>=6||e3>=6){
			alMenosUno++;
		}
		//ultimo examen
		if(e1<6&&e2<6&&e3>=6){
			ultimoExamen++;
		}
	}
	
	cout<<"aproboTodos "<<aproboTodos<<endl;
	cout<<"alMenosUno "<<alMenosUno<<endl;
	cout<<"ultimoExamen "<<ultimoExamen<<endl;
}
