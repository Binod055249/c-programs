//============================================================================
// Name        : 2dMatrixSearch2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the size for the 2d array: " << endl; // prints
	int m, n;
	cin >> m >> n;
	int arr[m][n];
	cout << "Enter the elements for 2d Array: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];

		}
	}
	int *p = arr[0];
	cout << "Entered Matrix is: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << *(p + i * n + j) << " ";
		}
		cout << endl;
	}
	int row = 0, col = n - 1, target;
	cout << "Enter a element you want to search in this array: " << endl;
	cin >> target;
	while (row < n && col >= 0) {
		if (arr[row][col] == target) {
			cout << "Element is found in " << row + 1 << " row and " << col + 1
					<< " column.";
			exit(0);
		}
		arr[row][col] > target ? col-- : row++;
	}

	cout << "Element is not present in this array." << endl;
	return 0;
}
