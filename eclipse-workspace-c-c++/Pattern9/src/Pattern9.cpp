//============================================================================
// Name        : Pattern9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows for pattern9: " << endl;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char ch = 64;
		for (int j = 1; j <= (2 * n - 1); j++) {
			if (j <= n) {
				ch++;
			} else {
				ch--;
			}
			if (j <= (n + 1 - i) || j >= (n - 1 + i)) {
				cout << ch<<" ";
			} else {
				cout << "  ";

			}
		}
		cout << endl;
	}
	return 0;
}
