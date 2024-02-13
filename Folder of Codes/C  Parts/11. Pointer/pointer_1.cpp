// pointer holds an address rather than a value
// pointer is a variable that store\points the address of another variable
// & symbol is used to get the address of the variable
// * symbol is used to get the value of the variable that the pointer is pointing to
#include<iostream>

using namespace std;

int main()
{
    int variable = 5;

    int *pointer_variable;

//  *pointer_variable = 5;  it is not possible. value cannot be assigned in pointer variable directly

    pointer_variable = &variable; // here storing address of the variable

    cout<<"value of variable                                             : "<< variable <<endl;
    cout<<"address of variable (&variable)                               : "<< &variable <<endl;
    cout<<"address of variable using pointer variable (pointer_variable) : "<< pointer_variable <<endl;
    cout<<"value of variable using  pointer variable (*pointer_variable) : "<< *pointer_variable <<endl;
    cout<<"address of pointer (&pointer_variable)                        : "<< &pointer_variable <<endl;
}
