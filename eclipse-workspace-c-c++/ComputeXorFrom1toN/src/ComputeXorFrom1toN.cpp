//============================================================================
// Name        : ComputeXorFrom1toN.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int computeXor(int n){

	if(n%4==0) return n;
	if(n%4==1) return 1;
	if(n%4==2) return n+1;
	else
		return 0;
}

int main() {
	cout << "Enter the number upto which you want xor:  " << endl; // prints
	int n;
	cin>>n;
	cout<<computeXor(n);
	return 0;
}
