//============================================================================
// Name        : CountSetbit.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int countSetBit(int n){
	int count=0;
	while(n){
		n=(n&(n-1));
		count++;

	}
	return count;

}

int main() {
	cout << "Enter a number for which you want to know setbit:" << endl; // prints
	int n;
	cin>>n;
	cout<<countSetBit(n);
	return 0;
}
