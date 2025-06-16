#include <iostream>
//
using namespace std;

int main()
{
    int n, count = 0, q;

    cout << "Enter a number: ";
    cin >> n;

    q = n;

    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    cout << "Total Number of Digits in " << n << " is : " << count << endl;
}