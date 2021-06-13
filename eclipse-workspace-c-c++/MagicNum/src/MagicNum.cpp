//============================================================================
// Name        : MagicNum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

bool isMagicNum(int n){

	int sum=0,rem;
	while(n>0 ||sum>9){

		if(n==0){
			n=sum;
			sum=0;
		}
		rem=n%10;
		sum+=rem;
		n/=10;
	}

	if(sum==1){
	return true;
	}
	else{
		return false;
	}
}
void magicNumBetween(int n1, int n2){
	for(int i=n1;i<=n2;i++){
		if(isMagicNum(i)){
			cout<<i<<endl;
		}
	}
}

int main() {
	cout << "Enter a number to check it is magic number or not: " << endl; // prints
	int n1,n2;
	cin>>n1>>n2;
	magicNumBetween(n1,n2);

	return 0;
}
