//============================================================================
// Name        : CompressionOfString.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
using namespace std;

int main() {
	cout << "Enter a string: " << endl; // prints
	string str;
	getline(cin, str);
	cin.ignore();
	char ans[100];
	ans[0] = str[0];
	int count = 1;
	int n = str.length();
	for (int i = 1; i < n; i++) {
		if (str[i] != str[i - 1]) {
			ans[count] = str[i];
			count++;
		}
	}

	cout << ans ;
	cout<<endl;
	return 0;
}
