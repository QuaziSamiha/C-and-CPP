#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "factorial of " << n << " : " << fact(n) << endl;
}