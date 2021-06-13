//============================================================================
// Name        : ArrayRotationBruteForce.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the array Size: " << endl; // prints
	int n,i;
	cin>>n;
	int arr[n];
	cout<<"Enter the array Elements"<<endl;
	for( i=0;i<n;i++){
		cin>>arr[i];
	}
	int d;
	cout<<"Enter the array index from where you want to rotate the array: ";
	cin>>d;
	int temp[d];
	for( i=0;i<d;i++){
		temp[i]=arr[i];
	}
	for(i=0;i<n-d;i++){
		arr[i]=arr[i+d];
	}
	int j=0;
	for(;i<n;i++){
		arr[i]=temp[j++];
	}
	cout<<"Rotated Array is: "<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
