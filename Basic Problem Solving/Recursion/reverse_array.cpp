#include <iostream>

using namespace std;

// revarse array without iteration
// reverse array with recursion
void reverse_array(int a[], int f, int l);

int main()
{
    int a[] = {5, 7, 9, 11, 6};
    reverse_array(a, 0, 4);
    return 0;
}

void reverse_array(int a[], int f, int l)
{
    if (f == l)
    {
        cout << a[f] << "\t";
        return;
    }
    else
    {
        reverse_array(a, f + 1, l);
        cout << a[f] << "\t";
    }
}