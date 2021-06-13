//============================================================================
// Name        : SpiralOrderTraversal2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void spiralOrderTraversal(int *p, int m , int n){

	int rowStart=0, rowEnd=m-1,colStart=0,colEnd=n-1;
      while(rowStart<=rowEnd && colStart<= colEnd){

    	  for(int col = colStart; col<=colEnd;col++){
    		  cout<<*(p+ rowStart*n+col)<<" ";
    	  }
    	  rowStart++;
    	  for(int row= rowStart; row<=rowEnd;row++){
    		  cout<<*(p+ row*n+colEnd)<<" ";
    	  }
    	  colEnd--;
    	  for(int col=colEnd;col>=colStart;col--){
    		  cout<<*(p+rowEnd*n+col)<<" ";
    	  }
    	  rowEnd--;
    	  for(int row= rowEnd;row>=rowStart;row--){
    		  cout<<*(p+row*n+colStart)<<" ";
    	  }
    	  colStart++;
      }
}

int main() {
	cout << "Enter the size for 2D array: " << endl; // prints
	int m,n;
	cin>>m>>n;
int arr[m][n];
int *p=arr[0];
cout<<"Enter the element for 2D array: "<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>arr[i][j];
	}
}
cout<<"Entered Elements of 2d array are"<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<*((p+i*n)+j)<<" ";
	}
	cout<<endl;
}
spiralOrderTraversal(p,m,n);
	return 0;
}
