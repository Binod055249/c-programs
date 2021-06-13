//============================================================================
// Name        : BinaryAddition.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void binaryAddition(int n1, int n2) {
	int ans[100], i = 0, carryOver=0;
	while (n1 != 0 || n2 != 0) {
		ans[i++] = (n1 % 10 + n2 % 10+carryOver) % 2;
		carryOver = (n1 % 10 + n2 % 10+carryOver) / 2;
		n1 /= 10;
		n2 /= 10;
	}
	if (carryOver == 1) {
		ans[i++] = carryOver;
	}
	i--;
	while (i>=0) {
		cout << ans[i--];
	}
}
int main() {
	cout << "Enter two binary no. for addition: " << endl; // prints
	int n1, n2;
	cin >> n1 >> n2;
	binaryAddition(n1, n2);
	return 0;
}
