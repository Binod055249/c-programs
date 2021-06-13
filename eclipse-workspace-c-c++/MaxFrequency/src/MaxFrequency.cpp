//============================================================================
// Name        : MaxFrequency.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Enter the string:" << endl;
	string str;
	getline(cin, str);
	int alpha[26];
	for (int i = 0; i < 26; i++) {
		alpha[i] = 0;

	}

	for (int i = 0; i < str.length(); i++) {
		alpha[str[i] - 'a']++;
	}
	char ans;
	int maxfrequency = -1;
	for (int i = 0; i < 26; i++) {

		if (alpha[i] > maxfrequency) {
			maxfrequency = alpha[i];
			ans = i + 'a';
		}
	}

	cout << ans<<endl;
	cout << maxfrequency<<endl;

	return 0;
}

/*
 string s="jdcasdjhjadfisdajhd";
 int a[26];
 for(int i=0;i<26;i++){
 a[i]=0;
 }

 for(int i=0;i<s.length();i++){
 a[s[i]-'a']++;
 }
 char ans;
 int maxfrequency=-1;

 for(int i=0;i<26;i++){
 if(a[i]>maxfrequency){
 maxfrequency=a[i];
 ans='a'+i;
 }
 }


 cout << maxfrequency << endl; // prints
 cout<<ans;*/
