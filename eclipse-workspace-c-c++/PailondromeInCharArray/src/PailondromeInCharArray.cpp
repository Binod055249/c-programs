//============================================================================
// Name        : PailondromeInCharArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the char array size: " << endl; // prints
	int n,check=1;
	cin>>n;

	char arr[n+1];
	cout<<"Enter the char to check it is pailondrome or not: "<<endl;
	cin>>arr;
	for(int i=0;i<n;i++){
		if(arr[i]!=arr[n-1-i]){
			check=0;
			break;
		}
	}
	if(check){
		cout<<arr<<" is a pailondrome.";
	}else{
		cout<<arr<<" it is not a pailondrome";
	}
	return 0;
}
