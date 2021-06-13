//============================================================================
// Name        : 2DMatrixSearch.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the size of the 2D array:" << endl; // prints
	int m, n;
	cin >> m >> n;
	int arr[m][n];
	cout << "Enter the elements for 2D array: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	cout << "2D Array: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Enter a element you want to search in this array: " << endl;
	int element;
	cin >> element;
	int pos = -1;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (element == arr[i][j]) {
				pos = j;
				break;
			}
		}

	}
	if (pos == -1) {
		cout << "Element is not present in the array: " << endl;
	} else {
		cout << "Element is found in the " << pos + 1 << " position. ";
	}

	return 0;
}
