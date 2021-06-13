//============================================================================
// Name        : StrongNum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int fact(int n) {
	if (n == 1 || n == 0)
		return 1;
	return n * fact(n - 1);
}
bool isStrongNum(int n) {
	int rem, sum = 0;
	int tempN = n;
	while (n) {
		rem = n % 10;
		sum += fact(rem);
		n /= 10;
	}
	if (sum == tempN) {
		return true;

	} else {
	/*	cout<<"given number "<<tempN<<" is not a strong number since the sum of factorial of individual digits is: "
				<<sum;*/
		return false;

	}
}
void strongNumBetween(int n1,int n2){
	for(int i=n1;i<=n2;i++){
		if(isStrongNum(i)){
			cout<<i<<endl;
		}
	}
}
int main() {
	cout << "Enter two numbers to get the strong number between them: " << endl; // prints
	int n1,n2;
	cin >> n1>>n2;
	strongNumBetween(n1,n2);
	return 0;
}
