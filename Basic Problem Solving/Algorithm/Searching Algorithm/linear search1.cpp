#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 15, 66, 83, 65, 42, 7, 3, 14, 52};

    int n, pos = -1;

    cout << "Enter the searching number: ";
    cin >> n;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == n)
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "\nNot Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
        cout << "The position is at " << pos << endl;
    }
}

/*
Linear Search is defined as a sequential search algorithm that starts at one end and goes through
each element of a list until the desired element is found, otherwise the search continues till the
end of the data set.

How Does Linear Search Algorithm Work?
In Linear Search Algorithm,
Every element is considered as a potential match for the key and checked for the same.
If any element is found equal to the key, the search is successful and the index of that element is returned.
If no element is found equal to the key, the search yields “No match found”.

Time and Space Complexity of Linear Search:
Time Complexity:
Best Case: In the best case, the key might be present at the first index. So the best case complexity is O(1)
Worst Case: In the worst case, the key might be present at the last index i.e., opposite to the end from
which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list.
Average Case: O(N)

Auxiliary Space: O(1) as except for the variable to iterate through the list, no other variable is used.

Advantages of Linear Search:
Linear search can be used irrespective of whether the array is sorted or not. It can be used on arrays of
any data type.
Does not require any additional memory.
It is a well-suited algorithm for small datasets.

Drawbacks of Linear Search:
Linear search has a time complexity of O(N), which in turn makes it slow for large datasets.
Not suitable for large arrays.

When to use Linear Search?
When we are dealing with a small dataset.
When you are searching for a dataset stored in contiguous memory.
*/
