#include <iostream>
// 13.03.24
// 2nd ramadan
using namespace std;

int fun(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    return fun(x - 1, x + y);
}

int main()
{
    cout << fun(4, 3);
    return 0;
}

// output: 13