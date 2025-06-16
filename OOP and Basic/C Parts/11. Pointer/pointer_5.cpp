// pointer as parameter of user defined function
#include <iostream>

using namespace std;

void function_name(int *pointer_parameter_1, int *pointer_parameter_2) // user defined function
{
    int variable;

    // swapping
    variable = *pointer_parameter_1; // variable works as a temporary-variable
    *pointer_parameter_1 = *pointer_parameter_2;
    *pointer_parameter_2 = variable;
}

int main()
{
    int variable_1 = 23, variable_2 = 70;

    cout << "Before swapping : " << endl;
    cout << "variable_1 : " << variable_1 << endl;
    cout << "variable_2 : " << variable_2 << endl;

    function_name(&variable_1, &variable_2); // calling user defined function and passing address

    cout << endl
         << "After swapping : " << endl;
    cout << "variable_1 : " << variable_1 << endl;
    cout << "variable_2 : " << variable_2 << endl;

    return 0;
}
