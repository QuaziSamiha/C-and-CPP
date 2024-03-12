#include <iostream>

using namespace std;
// total no of invokation = 2f(n+1) - 1
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
        return f(n - 1) + f(n - 2);
    }
}

int main(){
    cout << fibonacci(10) << "\t";
}