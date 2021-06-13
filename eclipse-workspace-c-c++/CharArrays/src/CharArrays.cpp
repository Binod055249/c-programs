//============================================================================
// Name        : CharArrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the char array size: " << endl; // prints
	int n;
	cin>>n;
	char arr[n+1];
	cout<<"Enter the elements in character array: ";
	cin>>arr;
	cout<<arr;
	return 0;
}
