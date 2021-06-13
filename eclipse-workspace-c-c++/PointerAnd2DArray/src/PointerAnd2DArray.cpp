//============================================================================
// Name        : PointerAnd2DArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void output2DArray( int *p, int m, int n) {
	cout << "Entered Elements for 2D Array are column  major in functions ok: "
			<< endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << (*((p + j * m) + i)) << " ";
		}
		cout << endl;
	}

}

int main() {
	cout << "Enter the array size for 2D Array: " << endl; // prints
	int m, n;
	cin >> m >> n;
	int arr[m][n];
	int *p = arr[0];
	cout << "Enter the Elements for 2D Array: " << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	output2DArray(p, m, n);

	/*cout<<"Entered Elements for 2D Array are column  major: "<<endl;
	 for(int i=0;i<m;i++){
	 for(int j=0;j<n;j++){
	 cout<<(*((p+j*m)+i))<<" ";
	 }
	 cout<<endl;
	 }

	 return 0;*/
}
