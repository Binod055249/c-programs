//============================================================================
// Name        : BitManipulation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int getBit(int n,int pos){
	int mask=1<<pos;
	return ((n&mask)!=0);
}

int setBit(int n, int pos){
	int mask=1<<pos;
	return(n|mask);
}

int clearBit(int n, int pos){
	int mask=1<<pos;
	int negativeMask=~mask;
	return (n& negativeMask);
}
int updateBit(int n, int pos, int value){
	int mask=~(1<<pos);
	n= n& mask;
	return (n|(value<<pos));

}
int toggleBit(int n, int pos){
	int mask=1<<pos;
	return (n ^ mask);
}
int main() {
	cout << "Enter n and pos" << endl; // prints
	int n,pos;
	cin>>n>>pos;
	/*cout<<getBit(n,pos)<<endl;
	cout<<setBit(n,pos)<<endl;
	cout<<clearBit(n,pos)<<endl;*/
	//cout<<updateBit(n,pos,1);
	cout<<toggleBit(n,pos);
	return 0;
}
