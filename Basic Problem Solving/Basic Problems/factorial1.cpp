#include <iostream>

using namespace std;
// factorial -- solved using iteration
int main()
{
    int n, fact = 1;

    cout << "Enter a number : ";
    cin >> n;

    if (n == 0)
    {
        fact = 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }

    cout << "factorial of " << n << " : " << fact << endl;
}