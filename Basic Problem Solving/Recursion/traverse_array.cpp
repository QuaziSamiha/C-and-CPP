#include <iostream>

using namespace std;

// traverse array without iteration
// traverse array with recursion

void traverse_array(int a[], int f, int l);

int main()
{
    int a[] = {5, 7, 9, 11, 6};
    traverse_array(a, 0, 4);
    return 0;
}

void traverse_array(int a[], int f, int l)
{
    if (f == l)
    {
        cout << a[f] << "\t";
        return;
    }
    else
    {
        cout << a[f] << "\t";
        traverse_array(a, f + 1, l);
    }
}