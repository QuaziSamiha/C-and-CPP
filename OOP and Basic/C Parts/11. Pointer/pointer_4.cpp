// swapping number using pointer
#include <iostream>

using namespace std;

int main()
{
    int variable_1 = 23, variable_2 = 70, variable_3;

    int *pointer_variable_1, *pointer_variable_2;

    pointer_variable_1 = &variable_1;
    pointer_variable_2 = &variable_2;

    cout << endl
         << "Before swapping : " << endl;
    cout << "variable_1 : " << *pointer_variable_1 << endl;
    cout << "variable_2 : " << *pointer_variable_2 << endl;

    // swapping
    variable_3 = *pointer_variable_1; // variable_3 works as a temporary variable
    *pointer_variable_1 = *pointer_variable_2;
    *pointer_variable_2 = variable_3;

    cout << endl
         << "After swapping : " << endl;
    cout << "variable_1 : " << *pointer_variable_1 << endl;
    cout << "variable_2 : " << *pointer_variable_2 << endl;
}
