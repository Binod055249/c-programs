//============================================================================
// Name        : PerfectNum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool perfectNum(int n){
	int ans=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			ans+=i;
		}
	}

	if(ans==n){
		return true;

	}
	else{
		return false;
	}
}

void perfectNumBetween(int n1, int n2){
	for(int i=n1;i<=n2;i++){
		if(perfectNum(i)){
			cout<<i<<endl;
		}
	}
}

int main() {
	cout << "Enter a number to check a number is perfect number or not: " << endl; // prints
	int n1,n2;
	cin>>n1>>n2;
	perfectNumBetween(n1, n2);

	return 0;
}
