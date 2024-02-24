// strong number
// 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
#include <iostream>

using namespace std;

int main()
{
    int q, n, fact, result = 0, temp, r;

    cout << "Enter a number : ";
    cin >> n;

    fact = 1;
    q = n;

    while (q != 0)
    {
        r = q % 10;
        for (int i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }

    if (result == n)
    {
        cout << "Strong Number" << endl;
    }
    else
    {
        cout << "Not Strong Number" << endl;
    }
}