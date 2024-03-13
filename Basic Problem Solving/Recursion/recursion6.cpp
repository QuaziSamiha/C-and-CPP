#include <iostream>

using namespace std;

int fun(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n % 2 << "\t";
    fun(n / 2);
}

int main()
{
    fun(25);
    return 0;
}

// output: 1	0	0	1	1	