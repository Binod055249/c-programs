//============================================================================
// Name        : MatrixMultiplication.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the array size for 1st array: " << endl; // prints
	int m, n;
	cin >> m >> n;
	int arr[m][n];
	int *p=arr[0];
	cout << "Enter the array size for 2nd array: " << endl;
	int a, b;
	cin >> a >> b;
	int arr1[a][b];
	int *q=arr1[0];
	if (n != a) {
		cout
				<< "matrix multiplication not possible as the 1st array column size is not equal to 2nd array row size";
		exit(0);
	}
	cout << "Enter the 1st matrix elements for matrix multiplication" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	cout << "Enter the 2nd matrix elements for matrix multiplication" << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr1[i][j];
		}
	}
	int ans[m][b];
	int *r=ans[0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < b; j++) {
			ans[i][j] = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < a; k++) {

				*(r+i*b+j)+= *(p+i*a+k) * *(q+k*m+j);
				//ans[i][j] += arr[i][k] * arr1[k][j];
			}
		}
	}

	cout << " matrix multiplication: " << endl;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < b; j++) {
			cout<<*(p+i*b+j);
			//cout << ans[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
