//============================================================================
// Name        : Conversion2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <Math.h>
#include<string.h>
using namespace std;

int binaryToDecimal(int n) {
	int k = 0, rem, ans = 0;
	while (n) {
		rem = n % 10 * pow(2, k++);
		ans = ans + rem;
		n = n / 10;
	}
	return ans;
}
void decimalToBinary(int n) {
	int ans[100], i = 0;
	while (n) {
		ans[i++] = n % 2;
		n /= 2;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << ans[j];
	}

}

int hexaDecimalToDecimal(string ch) {

	int ans = 0, j = 0, s = ch.length();
	for (int i = s - 1; i >= 0; i--) {

		if (ch[i] >= '0' && ch[i] <= '9') {
			ans = ans + (ch[i] - '0') * pow(16, j++);
		}
		if (ch[i] >= 'A' && ch[i] <= 'F') {
			ans = ans + (ch[i] - 'A' + 10) * pow(16, j++);
		}
	}
	return ans;
}

void decimalToHexaDecimal(int n) {
	int rem, i = 0;
	char str[100];
	while (n) {
		rem = n % 16;
		if (rem > 9) {
			str[i++] = rem + 'A' - 10;
		} else {
			str[i++] = rem + '0';
		}
		n /= 16;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << str[j];
	}
}
int OctalToDecimal(int n) {
	int rem, ans = 0, i = 0;
	while (n) {
		rem = n % 10 * pow(8, i++);
		ans = ans + rem;
		n = n / 10;
	}
	return ans;
}
void decimalToOctal(int n) {
	int i = 0, rem, arr[100];
	while (n) {
		rem = n % 8;
		arr[i++] = rem;
		n /= 8;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << arr[j];
	}
}

void binaryToOctal(int n){

	int dec = binaryToDecimal(n);
	decimalToOctal(dec);

}
void binaryToHexaDecimal(int n){

	int dec = binaryToDecimal(n);
	decimalToHexaDecimal(dec);
}
int main() {
	int n;
	//string s;
	/*cout << "Enter a no. to convert binary to decimal: " << endl; // prints
	 cin>>n;
	 cout<<binaryToDecimal(n);*/
	/*cout << "Enter a no. to convert decimal to binary: " << endl; // prints
	 cin>>n;
	 decimalToBinary(n);*/
	/*cout << "Enter a no. to convert HexaDecimalToDecimal: " << endl; // prints
	 cin>>s;
	 cout<<hexaDecimalToDecimal(s);*/
	/*cout << "Enter a no. to convert DecimalToHexaDecimal: " << endl; // prints
	 cin >> n;
	 decimalToHexaDecimal(n);*/
	/*cout << "Enter a no. to convert OctalToDecimal: " << endl; // prints
	 cin >> n;
	 cout << OctalToDecimal(n);*/
	/*cout << "Enter a no. to convert DecimalToOctal: " << endl; // prints
	cin >> n;
 decimalToOctal(n);*/
	/*cout << "Enter a no. to convert binaryToOctal: " << endl; // prints
		cin >> n;
		 binaryToOctal(n);*/
	cout << "Enter a no. to convert binaryToHexaDecimal: " << endl; // prints
			cin >> n;
			 binaryToHexaDecimal(n);
	return 0;
}
