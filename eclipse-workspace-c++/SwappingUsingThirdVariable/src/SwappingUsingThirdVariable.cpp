//============================================================================
// Name        : SwappingUsingThirdVariable.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter first number: ";
	int a, b;
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "first number: " << a;
	cout << "second number: " << b;

	return 0;
}
