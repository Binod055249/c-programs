//============================================================================
// Name        : MatrixTranspose.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void matrixTranspose(int *p, int m, int n){

	for(int i=0;i<m;i++){
		for(int j=i;j<n;j++){

		int temp=*((p+i*n)+j);

		*((p+i*n)+j)=*((p+j*n)+i);
		*((p+j*n)+i)=temp;

	}
}
}

int main() {
	cout << "Enter the array size for 2D array: " << endl; // prints
	int n, m;
	cin>>m>>n;
	int arr[m][n];
	int *p=arr[0];
	cout<<"Enter the elements for 2D array: "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	matrixTranspose(p,m,n);
	cout<<"After Transpose the elements of 2D array are: "<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	return 0;
}
