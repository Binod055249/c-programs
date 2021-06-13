//============================================================================
// Name        : 1DArray.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void insertionUnSorted(int *arr, int n, int pos, int element) {

	*(arr + (n)) = *(arr + (pos - 1));
	*(arr + (pos - 1)) = element;
	n++;

	cout << "Elements after insertion the array are: " << endl;
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}

}

void insertInSorted(int *arr, int n, int pos, int element) {
	int i;
	for (i = n - 1; i >= pos - 1; i--) {
		*(arr + i + 1) = *(arr + i);
	}
	*(arr + pos - 1) = element;
	n++;
	cout << "Elements after insertion the array are: " << endl;
	for (i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
}

void deleteInSorted(int *arr, int n, int pos) {
	int i;
	for (i = pos - 1; i < n - 1; i++) {
		*(arr + i) = *(arr + i + 1);
	}
	n--;
	cout << "Elements after deletion of the array are: " << endl;
	for (i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
}

void insertionSort(int *arr, int n) {

	for (int i = 1; i < n; i++) {

		int current = *(arr + i);
		int j = i - 1;
		while (j >= 0 && *(arr + j) > current) {
			*(arr + j + 1) = *(arr + j);
			j--;
		}
		*(arr + j + 1) = current;
	}
}

int main() {
	cout << "Enter the array size: " << endl; // prints
	int n;
	cin >> n;
	int arr[n];
	int *p=arr;
	cout << "Enter the elements of the array: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Elements of the array are: " << endl;
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	insertionSort(p, n);
	cout << "\nElements of the array after insertion sort are: " << endl;
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	/*cout << "\nEnter the Element you want to insert in unsorted array: "
			<< endl;
	int element;
	cin >> element;
	cout << "Enter the position where you want to enter the element: " << endl;
	int pos;
	cin >> pos;
//insertionUnSorted((int *) arr, n,pos, element);
	insertInSorted((int*) arr, n, pos, element);*/
	cout << "Enter the position where you want to delete the element: " << endl;
	int pos1;
	cin >> pos1;
	deleteInSorted((int*) arr, n, pos1);

	return 0;
}
