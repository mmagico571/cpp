//Programa 11.3
#include<iostream>
using namespace std;

int main(){
	const int MAX=5;
	int numero[MAX]={2,18,1,27,16};
	int maxNum=numero[0];
	int i=0;
	
	for(i =0 ;i<MAX;i++){
		if(numero[i]>maxNum){
			maxNum=numero[i];
		}
	}
	
	cout<<"maxNum: "<<maxNum;
}
