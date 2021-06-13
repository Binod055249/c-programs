//============================================================================
// Name        : Pattern20.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows for pattern20: " << endl;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char ch = 'A';

		for (int j = 1; j <= 2 * n; j++) {
			if (j >= (n + 1 - i) && j <= (n + i)) {
				cout << ch++ << " ";

				if (j == n) {
					ch = 49;
				}
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
