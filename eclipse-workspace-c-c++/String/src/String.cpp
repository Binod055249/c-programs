//============================================================================
// Name        : String.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	/*string str="Binod";
	string str1="Binod kumar";
	string s(5,'n');
	string abc(str1);
	getline(cin,str);
	str.append(str1);
	cout << str << endl; // prints
	str1.clear();
	cout<<str1<<endl;
	cout<<s<<endl;
	cout<<abc;*/

	/*string s1="abc";
	string s2="xyz";
	cout<<s2.compare(s1)<<endl;
	cout<<s1.compare(s2)<<endl;
	string s="sadrkjionocpw";
	sort(s.begin(),s.end());
	cout<<s;
	cout<<s.find("ijk");
	cout<<'a'-'A';*/

	string s="8437598294375809983";
	sort(s.begin(),s.end(),greater<int>());
	cout<<s;


	return 0;
}
