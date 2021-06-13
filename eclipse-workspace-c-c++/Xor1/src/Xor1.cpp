//============================================================================
// Name        : Xor1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int extraElement(int arr[], int n){
	int xorElement=0;
	for(int i=0;i<n;i++){
		xorElement^=arr[i];
	}
	return xorElement;
}

int main() {
	cout << "Enter the array size: " << endl; // prints
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<extraElement(arr,n);

	return 0;
}
