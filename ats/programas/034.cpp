/*copiar 2 arreglos en un tercero
*/
#include<iostream>
using namespace std;

int main(){
		const int MAX1=5;
		const int MAX2=5;
		int vector1[MAX1]={1,2,3,4,5};
		int vector2[MAX2]={6,7,8,9,0};
		int vector3[MAX1+MAX2];
		
		for(int i=0;i<MAX1;i++){
			vector3[i]=vector1[i];
		}
		
		for(int i=MAX1;i<(MAX1+MAX2);i++){
			vector3[i]=vector2[i-MAX1];
		}
		
		for(int i=0;i<(MAX1+MAX2);i++){
			cout<<vector3[i]<<endl;
		}
		
}
