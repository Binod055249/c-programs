//============================================================================
// Name        : PrimeNumIn.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<Math.h>
using namespace std;

bool checkPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void primeNums(int n1, int n2){

	cout<<"Prime numbers between "<<n1 <<" and "<<n2<<" are: "<<endl;
	for(int i=n1;i<=n2;i++){
		if(checkPrime(i)){
			cout<<i<<endl;
		}
	}
}

int main() {
	cout << "Enter two number between which you want prime num: " << endl; // prints
	int n1,n2;
	cin>>n1>>n2;
	primeNums(n1,n2);
	return 0;
}
