// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;

		// If the element is present at the middle
		// itself
		if (arr[mid] == x)
			return mid;

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 1, r, x);
	}

	// We reach here when element is not
	// present in array
	return -1;
}

// Driver code
int main()
{
	int arr[] = {2, 3, 4, 10, 40};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}

/*
Binary Search is defined as a searching algorithm used in a sorted array by repeatedly
dividing the search interval in half. The idea of binary search is to use the information that the array
is sorted and reduce the time complexity to O(log N).

Conditions for when to apply Binary Search in a Data Structure:
The data structure must be sorted.
Access to any element of the data structure takes constant time.

In this algorithm,
Divide the search space into two halves by finding the middle index “mid”.
Compare the middle element of the search space with the key.
If the key is found at middle element, the process is terminated.
If the key is not found at middle element, choose which half will be used as the next search space.
If the key is smaller than the middle element, then the left side is used for next search.
If the key is larger than the middle element, then the right side is used for next search.
This process is continued until the key is found or the total search space is exhausted.
The most common method to calculate mid or middle element index in Binary Search Algorithm is
to find the middle of the highest index and lowest index of the searchable space,
using the formula mid = low + (high – low)/2

How to Implement Binary Search?
The Binary Search Algorithm can be implemented in the following two ways
Iterative Binary Search Algorithm
Time Complexity: O(log N)
Auxiliary Space: O(1)
Recursive Binary Search Algorithm
Time Complexity:
Best Case: O(1)
Average Case: O(log N)
Worst Case: O(log N)
Auxiliary Space: O(1), If the recursive call stack is considered then the auxiliary space will be O(logN).

Advantages of Binary Search:
Binary search is faster than linear search, especially for large arrays.
More efficient than other searching algorithms with a similar time complexity, such as interpolation search or exponential search.
Binary search is well-suited for searching large datasets that are stored in external memory, such as on a hard drive or in the cloud.

Drawbacks of Binary Search:
The array should be sorted.
Binary search requires that the data structure being searched be stored in contiguous memory locations.
Binary search requires that the elements of the array be comparable, meaning that they must be able to be ordered.


Applications of Binary Search:
Binary search can be used as a building block for more complex algorithms used in machine learning,
such as algorithms for training neural networks or finding the optimal hyperparameters for a model.
It can be used for searching in computer graphics such as algorithms for ray tracing or texture mapping.
It can be used for searching a database.
*/