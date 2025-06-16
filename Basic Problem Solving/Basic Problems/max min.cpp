// finding maximum and minimum from an array
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter how many elements : ";
    cin >> n;

    int a[n]; // declaring array

    cout << "Enter " << n << " elements for an array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maximum = a[0];
    int minimum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (maximum < a[i])
        {
            maximum = a[i];
        }
        if (minimum > a[i])
        {
            minimum = a[i];
        }
    }
    cout << "maximum : " << maximum << endl;
    cout << "minimum : " << minimum << endl;
}
