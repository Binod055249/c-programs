//============================================================================
// Name        : Pattern8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter no. of rows for pattern 8: "<<endl;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k=0;
		for(int j=1;j<=(2*n-1);j++){
			if(j>=(n+1-i) && j<=(n-1+i)){
				if(j<=n){
					++k;
				}else{
					--k;
				}
				cout<<k<<" ";
			}else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}
