//============================================================================
// Name        : zeroToLeft.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter size of the array: " << endl; // prints
	int n, i;
	cin >> n;
	int arr[n], zerosCount = 0;
	cout << "Enter 1's and 0's only: ";
	for (i = 0; i < n; i++) {

		cin >> arr[i];

		if (!(arr[i] == 0 || arr[i] == 1)) {
			cout << "Please enter 1's and 0's only.";
			exit(0);
		}
		if (arr[i] == 0) {
			zerosCount++;
		}
	}
	for (i = 0; i < n; i++) {
		if (i < zerosCount) {
			arr[i] = 0;
		} else {
			arr[i] = 1;
		}
	}

	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
}
