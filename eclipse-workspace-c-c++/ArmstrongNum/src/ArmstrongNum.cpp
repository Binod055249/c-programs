//============================================================================
// Name        : ArmstrongNum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<Math.h>
using namespace std;

int countArmstrongNum(int n){
int count=0;
	while(n){
	count++;
	n/=10;
	}
	return count;
}
bool checkArmstrongNum(int n){
	int rem,ans=0,count;
	int tempN=n;
	count=countArmstrongNum(n);
	while(n){
		 rem= n%10;
		ans=ans+ pow(rem,count);
		n/=10;
	}
	if(ans==tempN){
		return true;
	}else{
		return false;
	}
}
void armstrongGivenNum(int n1, int n2){
	for(int i=n1;i<=n2;i++){
		if(checkArmstrongNum(i)){
			cout<<i<<endl;
		}
	}
}

int main() {
	cout << "Enter a number to check armstrong number or not: " << endl; // prints
	int n1,n2;
	cin>>n1>>n2;
	armstrongGivenNum(n1,n2);


	return 0;
}
