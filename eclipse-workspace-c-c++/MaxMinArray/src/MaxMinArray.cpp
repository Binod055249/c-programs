//============================================================================
// Name        : MaxMinArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter array size: " << endl; // prints
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxi=INT_MIN;
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
		mini=min(mini,arr[i]);
	}
	cout<<maxi<<" "<<mini;
	return 0;
}
