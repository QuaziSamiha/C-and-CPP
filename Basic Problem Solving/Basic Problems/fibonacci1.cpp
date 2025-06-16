#include <iostream>

using namespace std;
// without array
int main()
{
    int n, first = 0, second = 1, febo = 0;

    cout << "enter a number : ";
    cin >> n;

    cout << endl
         << first << "\t" << second << "\t";
    for (int i = 0; i < n; i++)
    {
        febo = first + second;
        cout << febo << "\t";
        first = second;
        second = febo;
    }
}