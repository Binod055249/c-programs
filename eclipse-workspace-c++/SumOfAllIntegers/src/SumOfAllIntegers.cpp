//============================================================================
// Name        : SumOfAllIntegers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter a first number: "<<endl;
	int n1,n2,sum=0;
	cin>>n1;
	cout<<"Enter a second number: "<<endl;
	cin>>n2;
	for(int i=n1;i<=n2;i++){
		if(i%2==0){
			sum+=i;
		}
	}
	cout<<"sum between "<<n1<<" and "<<n2<<" is: "<<sum;
	return 0;
}
