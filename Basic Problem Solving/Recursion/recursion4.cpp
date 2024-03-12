#include <iostream>
// direct recursion
using namespace std;
// find out the value
// 13.03.24
int fun(int n)
{
    if (n < 3) // base case
    {
        return 1;
    }
    else
    {
        return fun(n - 1) + fun(n - 1) + 1;
    }
}

int main()
{
    cout << fun(5) << endl;
}

// output: 15

// f(3) --- output: 3
// f(4) --- output: 7