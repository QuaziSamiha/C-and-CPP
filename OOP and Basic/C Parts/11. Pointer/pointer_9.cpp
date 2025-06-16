// pass by address (use of pointer)
#include <iostream>

using namespace std;

void function_name(int *, int *); // function prototype for pass by address

int main()
{
    int variable_1 = 11, variable_2 = 33;

    cout << "Before calling function_name() : " << endl;
    cout << "variable_1 : " << variable_1 << endl;
    cout << "variable_2 : " << variable_2 << endl
         << endl;

    function_name(&variable_1, &variable_2); // calling user defined function and passing address

    cout << "After calling function_name() : " << endl;
    cout << "variable_1 : " << variable_1 << endl;
    cout << "variable_2 : " << variable_2 << endl;
}

void function_name(int *pointer_parameter_1, int *pointer_parameter_2) // definition of user define function
{
    *pointer_parameter_1 = 45;
    *pointer_parameter_2 = 62;
}

/*
Before calling function_name() :
variable_1 : 11
variable_2 : 33

After calling function_name() :
variable_1 : 45
variable_2 : 62
*/
