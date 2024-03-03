// change value of variable using pointer
#include<iostream>

using namespace std;

int main()
{
    int variable = 5;

    int *pointer_variable;
//  *pointer_variable = 5; it is not possible. value cannot be assigned in pointer variable

    pointer_variable = &variable;
    *pointer_variable = 4; // it is possible. changing value of the variable using pointer

    cout<<"value of variable : "<< variable <<endl;
    cout<<"address of variable (&variable) : "<< &variable <<endl;
    cout<<"address of variable using pointer_variable : "<< pointer_variable <<endl;
    cout<<"value of variable using  pointer_variable (*pointer_variable) : "<< *pointer_variable <<endl;
    cout<<"address of pointer (&pointer_variable) : "<< &pointer_variable <<endl;
}

/*
value of variable : 4
address of variable (&variable) : 0x7ffc786f850c
address of variable using pointer_variable : 0x7ffc786f850c
value of variable using  pointer_variable (*pointer_variable) : 4
address of pointer (&pointer_variable) : 0x7ffc786f8510
*/