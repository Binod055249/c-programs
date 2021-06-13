//============================================================================
// Name        : Factorial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double fact(double n){
	double fact =1;
	for(int i=2;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int main() {

	double n;
	cout<<"Enter the number for which you want factorial: ";
	cin>>n;
	cout<<fact(n);
	return 0;
}
