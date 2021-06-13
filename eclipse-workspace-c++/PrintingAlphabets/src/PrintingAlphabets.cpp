//============================================================================
// Name        : PrintingAlphabets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"Printing the alphabets from a to z: ";
	for(int i=97;i<123;i++){
		cout<<char(i)<<" ";
	}
	cout<<endl;

	cout<<"printing the alphabets from A to Z: ";
	for(int i=65;i<91;i++){
		cout<<char(i)<<" ";
	}
	return 0;
}
