//============================================================================
// Name        : pattern2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows of pattern2:";
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

			if (j >= (n + 1 - i)) {
				cout << "* ";
			} else {
				cout << "  ";

			}

		}
		cout << endl;
	}
	return 0;
}
