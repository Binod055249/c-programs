//============================================================================
// Name        : LongestWordInSentence2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a sentence char size: " << endl; // prints
	int n;
	cin >> n;
	cin.ignore();
	char ch[n + 1];
	cout << "Enter the sentence: " << endl;
	cin.getline(ch, n);
	cin.ignore();
	int i = 0, currentLen = 0, maxLen = 0, maxSt = 0, st = 0;
	while (i < n) {

		if (ch[i] == ' ' || ch[i] == '\0') {
			if (currentLen > maxLen) {
				maxLen = currentLen;
				maxSt = st;
			}
			st = i + 1;
			currentLen = 0;
		} else {
			currentLen++;
		}

		if (ch[i] == '\0')
			break;
		i++;
	}

	cout << ch << endl;
	cout << maxLen << endl;
	for (int i = 0; i < maxLen; i++) {
		cout << ch[maxSt + i] << endl;

	}

	return 0;
}
