//============================================================================
// Name        : LargestWordInSentence.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Enter the sentence size:" << endl; // prints
	int n;
	cin>>n;
	cin.ignore();
	cout<<"Enter the sentence: "<<endl;
	char arr[n+1];
	cin.getline(arr,n);
	cin.ignore();

	int i=0,currLen=0,maxLen=0,st=0,mxst=0;
	while(i<n){
		if(arr[i]==' '|| arr[i]=='\0' ){
			if(currLen>maxLen){
				mxst=st;
				maxLen=currLen;
			}
			st=i+1;
			currLen=0;
		}else{
			currLen++;
		}
		if(arr[i]=='\0') break;
		i++;
	}
	cout<<arr<<endl;
	cout<<maxLen<<endl;
	for(int i=0;i<maxLen;i++){
		cout<<arr[mxst+i];
	}
	cout<<endl;

	return 0;
}
