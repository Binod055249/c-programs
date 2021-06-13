//============================================================================
// Name        : SumOfNum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum(int n) {
	int sum = 0;
	//return (n*(n+1))/2;
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}
	return sum;
}
int main() {
	int n;
	cout << "enter the number upto which you want sum: ";
	cin >> n;
	cout << "sum of " << n << " natural numbers are: " << sum(n);
	return 0;
}
