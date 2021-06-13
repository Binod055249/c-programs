//============================================================================
// Name        : ArrayRotationOptimizedApproach.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void rotate(int arr, int n){
	
	int temp=arr[0];
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
int main() {
	cout<< "Enter the array size:" << endl; // prints
	int n,i;
	cin>>n;
	int arr[n];
	cout<<"Enter the array Elements: "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the array index from where you want to rotate the array: "<<endl;
	int d;
	for(i=0;i<d;i++){
		rotate(arr,n);

	}
	return 0;
}
