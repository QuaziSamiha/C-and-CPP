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