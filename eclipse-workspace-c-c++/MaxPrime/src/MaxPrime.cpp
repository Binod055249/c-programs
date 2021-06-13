//============================================================================
// Name        : MaxPrime.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<Math.h>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;

}
 int primeNum(int n){
	 for(int i=n;i>=2;i--){
		 if(isPrime(i)){
			 return i;
		 }
	 }
	 return -1;
 }
int main() {
	cout << "Enter a number: " << endl; // prints
	int n;
	cin>>n;

	cout<<"maximum prime number below "<<n<<" is: "<<primeNum(n);
	return 0;
}
