//Programa 5.15
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	const int MAX = 6;
	float x, y=0;
	
	for(x=2;x<=MAX;x=x+0.5){
		y=pow(x,2)+(3*x)-2;
		cout<<x<<"	"<<y<<endl;
	}
}
