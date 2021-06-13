//============================================================================
// Name        : PythagorianTriplet2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool isPythagorianTriplet(int x,int y, int z){

	 int a=max(x,max(y,z));
	 int sum=x*x+y*y+z*z-a*a;
	 if(sum==a*a){
		 return true;
	 }else{
		 return false;
	 }
}

int main() {
	cout << "Enter three numbers to check pythagorian tiplet: " << endl; // prints
	int x,y,z;
	cin>>x>>y>>z;
	if(isPythagorianTriplet(x,y,z)){
		cout<<"This three number is a pythagorian triplet.";
	}else{
		cout<<"This three number is not a pythagorian triplet.";
	}

	return 0;
}
