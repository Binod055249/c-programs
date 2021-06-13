//============================================================================
// Name        : Pattern10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows for Pattern10: ";
	int n, k = 0;
	cin >> n;
	int m = (n + 1) / 2;
	for (int i = 1; i <= n; i++) {

		if (n % 2 == 0) {
			if(i<=m) k++;
			if(i>m+1) k--;
		} else {
			(i <= m) ? k++ : k--;
		}

		for (int j = 1; j <= n; j++) {
			if (j >= (m + 1 - k) && j <= (m - 1 + k)) {
				cout << "* ";
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
