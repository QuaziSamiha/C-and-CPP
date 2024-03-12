#include <iostream>
// print number in increasing order
using namespace std;
// head recursion
// direct recursion 
// 13.03.24

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1); // head recursion
        cout << n << "\t";
    }
}

int main()
{
    fun(4);
    return 0;
}

// output: 1	2	3	4	