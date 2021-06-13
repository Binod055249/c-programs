//============================================================================
// Name        : MagicNum2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool magicNum(int n){
	if(n%9==1){
		return true;
	}else{
		return false;
	}
}
void magicNumBetween(int n1, int n2){
	for(int i=n1;i<=n2;i++){
		if(magicNum(i)){
			cout<<i<<endl;
		}
	}
}
int main() {
	cout << "Enter a number to check magic num or not: " << endl; // prints
	int n1,n2;
	cin>>n1>>n2;
	magicNumBetween(n1, n2);
	return 0;
}
