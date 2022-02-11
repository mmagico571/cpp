//e4.1.1
/*
Determine el valor de las siguientes expresiones. Suponga a = 5, b = 2, c = 4, d = 6, y e = 3.
a. a>b
b. a!=b
c. d%b==c%b
d. a*c!=d*b
e. d*b==c*e
f. !(a*b)
g. !(a%b*c)
h. !(c%b*a)
i. b%c*a
*/

#include<iostream>
using namespace std;

int main(){
int a=5,b=2,c=4,d=6,e=3;
cout<<"a."<<(a>b)<<endl;
cout<<"b."<<(a!=b)<<endl;
cout<<"c."<<(d%b==c%b)<<endl;
cout<<"d."<<(a*c!=d*b)<<endl;
cout<<"e."<<(d*b==c*e)<<endl;
cout<<"f."<<(!(a*b))<<endl;
cout<<"g."<<(!(a%b*c))<<endl;
cout<<"h."<<(!(c%b*a))<<endl;
cout<<"i."<<(b%c*a)<<endl;
}
