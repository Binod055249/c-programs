//============================================================================
// Name        : Maximumsum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the array size: " << endl; // prints
	int n;
	cin>>n;
	int arr[n];
	cout<<"Enter array Elements: " <<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k,sum;
	cout<<"Enter for how many consecutive elements you want sum to check: "<<endl;
	cin>>k;
	int maximum=-1;
	for(int i=0;i<(n-k+1);i++){
	 sum=0;
		for(int j=i;j<i+k;j++){
			sum+=arr[j];
		}
		cout<<sum<<" ";
		maximum=max(sum,maximum);
	}
	cout<<endl<<maximum;
	return 0;
}
