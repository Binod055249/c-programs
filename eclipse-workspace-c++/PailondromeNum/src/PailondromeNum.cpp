//============================================================================
// Name        : PailondromeNum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number: ";
	int n,rev=0;
	cin>>n;
	int originalNum=n;
	while(n!=0){
		rev=rev*10+n%10;
		n=n/10;
	}
	if(originalNum==rev){
		cout<<originalNum<<" is a palindrome number";
	}else{
		cout<<originalNum<<" is not a palindrome number";
	}
	return 0;
}
