//============================================================================
// Name        : Pattern15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows for pattern 15: ";
	int n;
	cin>>n;
	int m=(n+1)/2, k=0;
	for(int i=1;i<=n;i++){
		int count=1;
		(i<=m)?k++:k--;
		for(int j=1;j<=m;j++){
			if(j>=(m+1-k)){
				cout<<count<<" ";
				count++;
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
