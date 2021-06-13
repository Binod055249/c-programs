//============================================================================
// Name        : Conversion3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;

int values(char ch){

	switch(ch){
	case 'I': return 1;
	case 'V': return 5;
	case 'X':return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	default : return -1;
	}
}

int romanToInt(string roman){

	int n=roman.length()-1,p=0,ans=0;
	for(int i=n;i>=0;i--){
		if(values(roman[i])>=p){
			ans+= values(roman[i]);
		}else{
			ans-= values(roman[i]);
		}
		p=values(roman[i]);
	}
	return ans;
}

string intToRoman(int n){

	int value[13]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	string romanValue[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	string roman="";
	for(int i=0;i<13;i++){
		while(n>=value[i]){
			roman=roman+romanValue[i];
			n=n-value[i];
		}
	}
	return roman;
}

int main() {
	/*cout << "Enter a roman number to convert it into integer: " << endl; // prints
	string str;
	cin>>str;
	cout<<romanToInt(str);*/
	cout << "Enter a integer number to convert it into roman: " << endl; // prints
		int str;
		cin>>str;
		cout<<intToRoman(str);
	return 0;
}
