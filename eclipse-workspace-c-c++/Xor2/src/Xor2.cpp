//============================================================================
// Name        : Xor2].cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int getBit(int n, int pos) {
	int mask = (1 << pos);
	return ((n & mask) != 0);
}

void allElementXor(int arr[], int n) {

	int xorSum = 0, xorSum2 = 0;
	for (int i = 0; i < n; i++) {
		xorSum ^= arr[i];

	}

	int tempXor = xorSum;
	int setBit =0;
	int pos=0;
	while(setBit!=1){
		setBit=xorSum & 1;
		pos++;
		xorSum=xorSum>>1;
	}

	int newXor=0;
	for(int i=0;i<n;i++){
		if(getBit(arr[i],pos-1)){
			newXor^=arr[i];
		}
	}
	cout<<newXor<<" "<<(tempXor^ newXor);


}

int main() {
	cout << "Enter the array size: " << endl; // prints
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter the array elements: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	allElementXor(arr, n);
	return 0;
}
