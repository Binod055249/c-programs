//============================================================================
// Name        : SwappingUsingPointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int *a, int *b){
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;



}

int main() {
	cout << "Enter two numbers: " << endl; // prints
	int a,b;
	cin>>a>>b;
	cout<<"Before swapping value of a= "<<a<<" and value of b= "<<b<<endl;
	swap(&a,&b);
	cout<<"After swapping value of a= "<<a<<" and value of b= "<<b<<endl;
	return 0;
}
