// the use of static variables in a Function
//? 2020
//? (16 June,2025)
#include <iostream>

using namespace std;

/*
Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if
the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call
gets carried through the next function call. This is useful for implementing coroutines in C/C++ or any other application where previous
state of function needs to be stored.
*/

void func()
{
    static int v = 0; // static variable
    cout << v << " ";

    v++; // value is updated and will be carried to next function calls
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        func();
    }
    return 0;
}

/*
Output:
0 1 2 3 4
You can see in the above program that the variable v is declared as static. So, its value is carried through the function
calls. The variable v is not getting initialized for every time the function is called.
As a side note, Java does not allow static local variables in functions.
*/
