#include <iostream> // (8:43 am,15 August,2020)

// inline function -> use to reduce control time
using namespace std;

inline int function_name(int parameter_1, int parameter_2)
{
    return (parameter_1 + parameter_2);
}

int main()
{
    int variable1 = 30, variable2 = 70;

    cout << function_name(variable1, variable2) << endl;
    return 0;
}

// 12.02.2024
/*
In C++, the inline keyword is used to suggest to the compiler that a function should be expanded inline rather 
than being called as a separate function. This can potentially improve performance by avoiding the overhead of 
function call and return.

Here's a brief explanation:
1. Performance: When a function is marked as inline, the compiler may choose to replace the function 
call with the actual function code at the call site. This eliminates the overhead of function call, such as 
pushing arguments onto the stack and returning from the function.

2. Small Functions: Inline functions are typically used for small, FREQUENTLY CALLED FUNCTIONS. These functions 
are usually simple and concise, and the overhead of function call becomes noticeable in terms of performance.
*/
