//============================================================================
// Name        : PrimeBetweenRange.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<Math.h>
using namespace std;

bool isPrime(int n) {

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	for (int i = a; i <= b; i++) {
		if (isPrime(i)) {
			cout << i << endl;
		}
	}

	return 0;
}
