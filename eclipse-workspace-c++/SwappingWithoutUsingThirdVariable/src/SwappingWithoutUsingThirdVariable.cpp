//============================================================================
// Name        : SwappingWithoutUsingThirdVariable.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the first number: ";
	int a, b;
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	a = a * b;
	b = a / b;
	a = a / b;
	cout << a << "  " << b;
	return 0;
}
