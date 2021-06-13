
//============================================================================
// Name        : PointerAnd1DArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Pointer:  " << endl; // prints
	int b=10;
	cout<<b<<endl;
	int *p;
	p=&b;
	cout<<*p<<endl;
	cout<<p<<endl;
	cout<<&b<<endl;
	int a[]={1,2,3,4,6,7,8};
	int *q;
	q=a;
	cout<<q<<endl;
	cout<<a<<endl;
cout<<++q<<endl;
cout<<*(a+1)<<endl;
cout<<*a+1<<endl;

	return 0;
}
