// pointer as a return type of a user defined function
#include <iostream>

using namespace std;

float *function_name(); // function prototype

int main()
{
    float *pointer;

    pointer = function_name(); // calling function

    cout << "address of variable : " << pointer << endl;
    cout << "value of variable   : " << *pointer << endl;
}

float *function_name() // function definition
{
    float variable = 5.2;
    return (&variable); // returning address
}
