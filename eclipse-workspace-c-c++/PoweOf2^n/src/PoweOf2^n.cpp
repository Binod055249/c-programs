//============================================================================
// Name        : PoweOf2^n.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int powerOf2(int pow){
	return (1<<pow);

}
bool isPowerOf2(int n){
	return(n&&!(n&(n-1)));
}

int main() {
	/*cout << "Enter the power to know the power of two: " << endl; // prints
	int pow;
	cin>>pow;
	cout<<powerOf2(pow)<<endl;*/
	cout << "Enter the number to know it is power of two or not: " << endl; // prints
		int n;
		cin>>n;
		cout<<isPowerOf2(n);
	return 0;
}
