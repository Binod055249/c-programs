//============================================================================
// Name        : LinearSearch.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {

	for (int i = 0; i < n; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[], int n, int key){

	int start=0,end=n-1;
	while(start<=end){
		int mid =(start+end)/2;
		if(arr[mid]==key){
			return mid;
		}else if(arr[mid]>key){
			end=mid-1;
		}else{
			start =mid+1;
		}

	}
	return -1;
}

int main() {
	cout << "Enter array size: " << endl; // prints
	int pos, n, key;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}
	cout << "Enter a number you want to search: ";
	cin >> key;
	//pos = linearSearch(arr, n, key);
	pos=binarySearch(arr,n,key);
	if (pos == -1) {
		cout << "Entered element is not present in the array .";
	}else{
	cout << key << " is found in the " << pos + 1 << " position in array.";}
	return 0;
}
