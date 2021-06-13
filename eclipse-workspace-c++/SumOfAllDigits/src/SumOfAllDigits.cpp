//============================================================================
// Name        : SumOfAllDigits.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number: ";
	unsigned int n;
	cin>>n;
	unsigned int sum=0;
	while(n!=0){
		sum=sum+n%10;
		n/=10;
	}
	cout<<sum;
	return 0;
}
