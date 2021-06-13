//============================================================================
// Name        : ReverseNumber.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int reverseNum(int n){

	int lastdigit, reverse=0;
	while(n!=0){
	lastdigit=n%10;
		reverse = reverse*10+lastdigit;
		n=n/10;
	}
	return reverse;
}

int main() {
	int n;
	cout<<"Enter a number for which you want to reverse it: ";
	cin>>n;
	cout<<"Reverse of "<<n<<" is: "<<reverseNum(n);
	return 0;
}
