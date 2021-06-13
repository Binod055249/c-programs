//============================================================================
// Name        : MultiplicationUsingAddition.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the no for which you want multiplication: ";
	int n1, n2, n3, n4;
	cin >> n1 >> n2;
	int sum = 0;
	if (n1 < 0) {
		n3 = -n1;
	}
	if (n2 < 0) {
		n4 = -n2;
	}


	if (n1 >= n2) {
		for (int i = 1; i <= n4; i++) {

			sum += n2;

		}
	}
	if (n2 > n1) {
		for (int i = 1; i <= n3; i++) {

			sum += n1;

		}
	}

	cout << n1 << " * " << n2 << " = " << sum << endl;
	return 0;
}
