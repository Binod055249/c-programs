//============================================================================
// Name        : ArrayOptimizedApproach1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;
/*void rotating(int arr, int n){

	int temp=arr[0];
	for(int j=0;j<n-1;j++){
		arr[j]=arr[j+1];
	}
	arr[n-1]=temp;
}*/
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
	cin>>d;
	for(i=0;i<d;i++){
		int temp=arr[0];
			for(int j=0;j<n-1;j++){
				arr[j]=arr[j+1];
			}
			arr[n-1]=temp;
	}
	cout<<"Array after rotation is: "<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
