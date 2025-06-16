#include <iostream>
using namespace std;

int main()
{
    int n, first = 2, second = 1, lucas = 0;

    cout << "enter a number : ";
    cin >> n;

    cout << endl
         << first << "\t" << second << "\t";

    for (int i = 3; i <= n; i++)
    {
        lucas = first + second;
        cout << lucas << "\t";
        first = second;
        second = lucas;
    }
}