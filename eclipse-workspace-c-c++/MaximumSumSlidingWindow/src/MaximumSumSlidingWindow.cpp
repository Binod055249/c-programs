//============================================================================
// Name        : MaximumSumSlidingWindow.cpp
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
	cout<<"Enter the array elements: "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the k : "<<endl;
	int k;
	cin>>k;
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=arr[i];
	}
	int maxi=sum;
	for(int i=k;i<n;i++){
		sum+= arr[i]-arr[i-k];
		maxi=max(sum,maxi);
	}
		cout<<maxi;

	return 0;
}
