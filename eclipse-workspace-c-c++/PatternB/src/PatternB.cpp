//============================================================================
// Name        : PatternB.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void patternB(int n) {
	int k = 0;
	for (int i = 1; i <= n; i++) {
		if (i == 4||i==7) {
			k = 0;
		}
		k++;
		for (int j = 1; j <= (n / 2)+1; j++) {

			if ((k == 1 )&& (j <=3)) {
				cout << "* ";
			} else if ((k>=2) && (j==4||j==1)) {
				cout << "* ";
			} else {
				cout << "  ";

			}
		}
		cout << endl;
	}

}

int main() {
	cout << "Enter the length for size B: " << endl; // prints
	int n;
	cin >> n;

	patternB(n);
	return 0;
}
