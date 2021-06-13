//============================================================================
// Name        : BiggestOfThreeNo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int great(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main() {
	cout <<"Enter three number: ";
	int a, b, c,greatest;
	cin>>a>>b>>c;
greatest =great(a,great(b,c));
    cout<<"maximum of three nums: "<<greatest;
	return 0;
}
