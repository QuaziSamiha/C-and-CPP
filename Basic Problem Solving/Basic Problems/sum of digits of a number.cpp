#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, q, temp, r;

    cout << "Enter a number: ";
    cin >> n;

    q = n;

    while (q != 0)
    {
        r = q % 10;
        sum = sum + r;
        q = q / 10;
    }

    cout << "Sum of Total Number of Digits in " << n << " is : " << sum << endl;
}