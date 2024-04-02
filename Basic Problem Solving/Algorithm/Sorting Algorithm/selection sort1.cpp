// C++ program for implementation of 
// selection sort 
#include <bits/stdc++.h> 
using namespace std; 

// Function for Selection sort 
void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of 
	// unsorted subarray 
	for (i = 0; i < n - 1; i++) { 

		// Find the minimum element in 
		// unsorted array 
		min_idx = i; 
		for (j = i + 1; j < n; j++) { 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 
		} 

		// Swap the found minimum element 
		// with the first element 
		if (min_idx != i) 
			swap(arr[min_idx], arr[i]); 
	} 
} 

// Function to print an array 
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) { 
		cout << arr[i] << " "; 
		cout << endl; 
	} 
} 

// Driver program 
int main() 
{ 
	int arr[] = { 64, 25, 12, 22, 11 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Function Call 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	printArray(arr, n); 
	return 0; 
} 

/*
Selection Sort 
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the 
smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion 
of the list. 

Complexity Analysis of Selection Sort
Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:
One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)

Auxiliary Space: O(1) as the only extra memory used is for temporary variables while 
swapping two values in Array. The selection sort never makes more than O(N) swaps and can be 
useful when memory writing is costly. 

Advantages of Selection Sort Algorithm:
1. Simple and easy to understand.
2. Works well with small datasets.

Disadvantages of the Selection Sort Algorithm:
1. Selection sort has a time complexity of O(n^2) in the worst and average case.
2. Does not work well on large datasets.
3. Does not preserve the relative order of items with equal keys which means it is not stable.

Frequently Asked Questions on Selection Sort:
Q1. Is Selection Sort Algorithm stable?
The default implementation of the Selection Sort Algorithm is not stable. However, it can be made stable. Please see the stable Selection Sort for details.
Q2. Is Selection Sort Algorithm in-place?
Yes, Selection Sort Algorithm is an in-place algorithm, as it does not require extra space.

*/