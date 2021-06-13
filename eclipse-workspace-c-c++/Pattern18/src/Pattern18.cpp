//============================================================================
// Name        : Pattern18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of  rows for pattern18: "<<endl;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(2*n-1);j++){
			if(j>=i && j<=2*n-i){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
