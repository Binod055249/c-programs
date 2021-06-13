//============================================================================
// Name        : FibonnanicSeries.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void fibonnaci(int n) {
	int first = 0, last = 1, sum;
	for (int i = 1; i <= n; i++) {
		cout << first<<" ";
		sum = first + last;
		first = last;
		last = sum;
	}
}
int main() {

	int n;
	cout << "Enter how many numbers you want fibonnaci series: ";
	cin >> n;
	fibonnaci(n);
	return 0;
}
