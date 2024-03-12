#include <iostream>

using namespace std;

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
        traverse_array(a, f + 1, l);
        cout << a[f] << "\t";
    }
}