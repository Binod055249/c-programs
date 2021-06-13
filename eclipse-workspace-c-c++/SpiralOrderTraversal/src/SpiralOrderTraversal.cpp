//============================================================================
// Name        : SpiralOrderTraversal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define R 3
#define C 6

void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;

    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;

        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;

        /* Print the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }

        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}

/* Driver Code */
int main()
{
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };

      // Function Call
    spiralPrint(R, C, a);
    return 0;
}


/*
void spiralOrderTraversal(int *arr, int n, int m){

	int rowStart=0,rowEnd=n-1,colStart=0,colEnd=m-1;

	while(rowStart<=rowEnd && colStart <=colEnd){

		for(int col=colStart;col<=colEnd;col++){
			cout<<*((arr+rowStart*n)+col)<<" ";
		}
		rowStart++;

		for(int row=rowStart;row<=rowEnd;row++){
			cout<<*((arr+row)+colEnd)<<" ";
		}
		colEnd--;
		for(int col= colEnd;col>=colStart;col--){
			cout<<*((arr+rowEnd)+col)<<" ";
		}
		rowEnd--;
		for(int row= rowEnd;row>=rowStart;row--){
			cout<<*((arr+row)+colStart)<<" ";
		}
		colStart++;
	}
}

int main() {
	cout << "Enter 2D Array size: " << endl; // prints
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	cout<<"Enter the elements for 2D Array: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	spiralOrderTraversal((int *)arr, n,m);

	return 0;
}
*/
