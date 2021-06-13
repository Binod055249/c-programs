//============================================================================
// Name        : ReverseOfANumber.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a no. for which you want to reverse: ";
	int n,reverse=0;
	cin>>n;
	while(n!=0){
		reverse=reverse*10+n%10;
		n=n/10;
	}
	cout<<"Reverse of a number: "<<reverse<<endl;
	return 0;
}
