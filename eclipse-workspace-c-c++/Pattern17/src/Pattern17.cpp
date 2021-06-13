//============================================================================
// Name        : Pattern17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows for pattern17: ";
	int n;
	cin >> n;
	int m = (n + 1) / 2, k = 0;
	for (int i = 1; i <= n; i++) {

		i <= m ? k++ : k--;

		for (int j = 1; j <= n; j++) {
			if ((n & 1) == 0) {
				if (j <= m + 1 - k || j >= m + k) {
					cout << "* ";
				} else {
					cout << "  ";
				}
			} else {
				if (j <= m + 1 - k || j >= m - 1 + k) {
					cout << "* ";
				} else {
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
