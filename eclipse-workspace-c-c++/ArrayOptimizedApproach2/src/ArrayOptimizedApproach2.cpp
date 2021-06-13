//============================================================================
// Name        : ArrayOptimizedApproach2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {

	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

}

int main() {
	cout << "Enter the Array size: " << endl; // prints
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter the array elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Enter the elements from where you want to rotate the array: "
			<< endl;
	int d;
	cin >> d;
	reverse(arr, 0, d-1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
	cout << "Array after rotation: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
