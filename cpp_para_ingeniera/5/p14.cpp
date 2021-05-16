//Programa 5.14
//programa que tabula la exprecion y=10x2+3x-2
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float x=1,y=0;
	const int MAX=5;
	
	for(int x=1;x<=MAX;x++){
		y=pow(x,2)+(3*x)-2;
		cout<<x<<"	"
			<<y<<endl;
	}
}
