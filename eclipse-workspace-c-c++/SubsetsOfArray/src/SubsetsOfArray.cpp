//============================================================================
// Name        : SubsetsOfArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void subsets(int arr[], int n){

	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&(1<<j)){
				cout<<"{ "<<arr[j]<<" }";
			}
		}
		cout<<endl;
	}
}

int main() {
	cout << "Enter the array size: " << endl; // prints
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter the array Elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	subsets(arr,n);
	return 0;
}



/*for(int i=0;i<(1<<n);i++){
	for(int j=0;j<n;j++){
		if(i&(1<<j)){
			cout<<arr[j]<<" ";
		}
	}
	cout<<endl;
}*/
























