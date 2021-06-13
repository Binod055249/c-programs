//============================================================================
// Name        : PythagorianTriplet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}

bool ispytho(int x, int y, int z){
	int a, sum;
	a= max(x,max(y,z));
	sum= x*x+y*y+z*z-a*a;
	if(sum==a*a){return true;}
	else{ return false;}

}

int main() {
	int x,y,z;
	cout<<"Enter three number: "<<endl;
	cin>>x>>y>>z;
	if(ispytho(x,y,z)){
		cout<<x<<", "<<y<<",and "<<z<<" are pythagorian triplet";
	}else{
		cout<<x<<", "<<y<<",and "<<z<<" are not pythagorian triplet";
	}
	return 0;
}
