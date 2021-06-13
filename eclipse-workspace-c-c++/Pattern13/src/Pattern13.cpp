//============================================================================
// Name        : Pattern13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows for pattern13: ";
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k=i;
		for(int j=1;j<=(2*n-1);j++){
			if(j>=(n+1-i) && j<=(n-1+i)){
				cout<<k<<" ";
				(j<n)?k++:k--;
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

	return 0;
}
