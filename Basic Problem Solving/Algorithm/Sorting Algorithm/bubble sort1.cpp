// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		// If no two elements were swapped
		// by inner loop, then break
		if (swapped == false)
			break;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << " " << arr[i];
}

// Driver program to test above functions
int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);
	return 0;
}

/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order. This algorithm is not suitable for large data sets as its average and 
worst-case time complexity is quite high.

In Bubble Sort algorithm, 
1. traverse from left and compare adjacent elements and the higher one is placed at right side. 
2. In this way, the largest element is moved to the rightmost end at first. 
3. This process is then continued to find the second largest and place it and so on until the data is sorted.

Total no. of passes: n-1
Total no. of comparisons: n*(n-1)/2
Time Complexity: O(N2)
Auxiliary Space: O(1)

Advantages of Bubble Sort:
1. Bubble sort is easy to understand and implement.
2. It does not require any additional memory space.
3. It is a stable sorting algorithm, meaning that elements with the same key value maintain their 
relative order in the sorted output.

Disadvantages of Bubble Sort:
1. Bubble sort has a time complexity of O(N2) which makes it very slow for large data sets.
2. Bubble sort is a comparison-based sorting algorithm, which means that it requires a comparison 
operator to determine the relative order of elements in the input data set. It can limit the efficiency 
of the algorithm in certain cases.
*/