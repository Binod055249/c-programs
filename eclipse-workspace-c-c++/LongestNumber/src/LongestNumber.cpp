//============================================================================
// Name        : LongestNumber.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
using namespace std;
int main() {
	int n, element, number;

	cout << "enter a number you want to compare" << endl;
	cin >> n;
	for (int i = 1; i < 2; i++) {
		cout << "enter your element " << i << " -> ";
		cin >> element;
	}
	for (int a = 2; a <= n; a++) {
		cout << "enter your element " << a << " -> ";
		cin >> number;

		if (number >= element) {
			element = number;
		} else {
			number = element;
		}

	}

	cout << "largest number is -> " << number;

	cout << "\n\t\t\t coding is fun........";
	return 0;
}
