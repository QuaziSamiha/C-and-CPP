#include <iostream>

using namespace std;
// total no of invocation = 2f(n+1) - 1
// total no of addition = f(n+1) - 1
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    cout << fibonacci(10) << "\t";
}