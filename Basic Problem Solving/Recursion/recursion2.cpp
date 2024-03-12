#include <iostream>

using namespace std;
// tail recursion
// direct recursion 
// 13.03.24

void fun(int n)
{
    if (n > 0)
    {

        cout << n << "\t";
        fun(n - 1); // tail recursion
    }
}

int main()
{
    fun(4);
    return 0;
}

// output: 4	3	2	1	