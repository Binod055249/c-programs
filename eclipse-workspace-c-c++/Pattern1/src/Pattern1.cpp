//============================================================================
// Name        : Pattern1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows: ";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			//if(j<=i){
				cout<<"* ";
			//}
		}
		cout<<endl;
	}
	return 0;
}
