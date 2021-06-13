//============================================================================
// Name        : Print1to100.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number till which you want to print from 1:" << endl; // prints
	int n,i=0;
	cin>>n;
	lb: if(i<n){
		cout<<++i<<endl;
	goto lb;
	}else{
		exit(0);
	}
	return 0;
}
