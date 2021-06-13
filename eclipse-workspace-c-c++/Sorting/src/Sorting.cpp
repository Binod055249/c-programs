//============================================================================
// Name        : Sorting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Sorted array is: " << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void bubbleSort(int arr[], int n) {
	int temp;
	for (int round = 1; round < n; round++) {
		int flag = 0;
		for (int j = 0; j < n - round; j++) {

			if (arr[j] > arr[j + 1]) {
				flag = 1;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (flag == 0)
			return;
	}

}

void insertionSort(int arr[], int n) {

	for (int i = 1; i < n; i++) {
int current =arr[i];
		int j = i - 1;
		while (arr[j] > current && j >= 0) {
			arr[j + 1] = arr[j];
			j--;

		}
		arr[j + 1] = current;
	}

}

int main() {
	cout << "Enter the array size: " << endl; // prints
	int n;
	cin >> n;
	int arr[n];
	cout << "Enter the array Elements: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//selectionSort(arr, n);
	//bubbleSort(arr, n);
	insertionSort(arr, n);
	cout << "sorted array is: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

/*
 selection sort
 void selection sort(int arr[], int n) {

 for(int i=0;i<n-1;i++) {
 for(int j=0;j<n;j++) {
 if(arr[i]>arr[j]) {
 int temp = arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
 }
 }
 }
 }

 bubble Sort
 void bubbleSort(int arr[], int n) {

 for (int round = 1; round < n; round++) {
 int flag = 0;
 for (int j = 0; j < n - round; j++) {

 if (arr[j] > arr[j + 1]) {

 flag = 1;
 int temp = arr[j];
 arr[j] = arr[j + 1];
 arr[j + 1] = temp;
 }
 }
 if (flag == 0)
 return;
 }
 }

 insertion sort
 void insertionSort(int arr[], int n) {

 for (int i = 1; i < n; i++) {

 int current = arr[i];
 int j = i - 1;
 while (arr[j] > current && j >= 0) {
 arr[j + 1] = arr[j];
 j--;

 }
 arr[j + 1] = current;
 }
 }

 void insertionSort(int arr[] int n){

 for(int i=1;i<n;i++){
 int current = arr[i];
 int j=i-1;
 while(j>=0 && arr[j]>cuurent){
 arr[j+1]=arr[j];
 j--;
 }
 arr[j+1]=cuurent;
 }

 */
