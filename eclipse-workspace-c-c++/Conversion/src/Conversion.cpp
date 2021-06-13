//============================================================================
// Name        : Conversion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<Math.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int binaryToDecimal(int n) {
	int rem, ans = 0, i = 0;
	while (n != 0) {
		rem = n % 10;
		ans = ans + rem * pow(2, i);
		n = n / 10;
		i++;
	}
	return ans;
}

int octalToDecimal(int n) {
	int rem, ans = 0, i = 0;
	while (n != 0) {
		rem = n % 10;
		ans = ans + rem * pow(8, i++);
		n = n / 10;
	}
	return ans;
}

int hexaToDecimal(string n) {
	int ans = 0, j = 0;
	int s = n.size();
	for (int i = s - 1; i >= 0; i--) {

		if (n[i] >= '0' && n[i] <= '9') {
			ans = ans + (n[i] - '0') * pow(16, j++);
		}
		if (n[i] >= 'A' && n[i] <= 'F') {
			ans = ans + (n[i] - 'A' + 10) * pow(16, j++);
		}

	}
	return ans;
}

void decimalToBinary(int n) {
	int ar[50], i = 0;
	while (n != 0) {

		ar[i] = n % 2;

		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << ar[j];
	}

}

void decimalToOctal(int n) {
	int ar[50], i = 0;
	while (n != 0) {
		ar[i++] = n % 8;
		n = n / 8;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << ar[j];
	}
}

void decimalToHexa(int n) {
	int rem,  i = 0;
	char hexa[50];
	while (n != 0) {
		rem = n % 16;
		if (rem < 10) {
			hexa[i++] = rem + 48;
		} else {
			hexa[i++] = rem +55;
		}
		n = n / 16;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << hexa[j];
	}

}
int main() {
	int n;

	/*
	 string n;
	 char choice;
	 lb: cout << "Enter binary number to convert binary to decimal: ";
	 cin >> n;
	 cout << binaryToDecimal(n) << endl;
	 cout << "Want to continue?\n Enter y or n: ";
	 cin >> choice;
	 if (choice == 'y' || choice == 'Y') {
	 goto lb;
	 }
	 cout << "Enter Octal number to convert octal to decimal: ";
	 cin >> n;
	 cout << octalToDecimal(n) << endl;
	 cout << "Enter Hexadecimal number to convert Hexadecimal to decimal: ";
	 cin >> n;
	 cout << hexaToDecimal(n) << endl;

	 cout << "Enter Decimal number to convert Decimal to binary: ";
	 cin >> n;
	 decimalToBinary(n);

	 cout << "Enter Decimal number to convert Decimal to Octal: ";
	 cin >> n;
	 decimalToOctal(n);
	 */

	cout << "Enter Decimal number to convert Decimal to hexadecimal: ";
	cin >> n;
	decimalToHexa(n);

	return 0;
}
