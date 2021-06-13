//============================================================================
// Name        : PrintingOddNoTillN.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout<<"Enter the number till which you want to print odd no.: ";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			cout<<i<<" ";
		}
	}
	return 0;
}
