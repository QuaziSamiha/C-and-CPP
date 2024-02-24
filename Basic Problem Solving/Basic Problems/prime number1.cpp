#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter an positive integer: ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not Prime Number" << endl;
    }
}