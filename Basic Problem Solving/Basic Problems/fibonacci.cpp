// Fibonacci series using array
#include <iostream>
// 07.09.24
// 09.07.25
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter how many Fibonacci number : ";
    cin >> n;

    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    cout << endl
         << "Fibonacci Series : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}
