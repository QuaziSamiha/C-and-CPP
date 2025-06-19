// pointer holds an address rather than a value
// pointer is a variable that store\points the address of another variable
// & symbol is used to get the address of the variable
// * symbol is used to get the value of the variable that the pointer is pointing to

#include <iostream>

using namespace std;

int main()
{
    int variable = 5;

    int *pointer_variable;

    //  *pointer_variable = 5; // it is not possible. value cannot be assigned in pointer variable directly

    // pointer_variable = &variable; // here storing address of the variable

    cout << "value of variable                                             : " << variable << endl;
    cout << "address of variable (&variable)                               : " << &variable << endl;
    cout << "address of variable using pointer variable (pointer_variable) : " << pointer_variable << endl;
    cout << "value of variable using  pointer variable (*pointer_variable) : " << *pointer_variable << endl;
    cout << "address of pointer (&pointer_variable)                        : " << &pointer_variable << endl;
}

/*
value of variable                                             : 5
address of variable (&variable)                               : 0x7ffcfdf8d31c
address of variable using pointer variable (pointer_variable) : 0x7ffcfdf8d31c
value of variable using  pointer variable (*pointer_variable) : 5
address of pointer (&pointer_variable)                        : 0x7ffcfdf8d320
*/

/**
The reason for using pointers in a C program is

A. Pointers allow different functions to share and modify their local variables.

B. To pass large structures so that complete copy of the structure can be avoided.

C. Pointers enable complex “linked" data structures like linked lists and binary trees.

D. All of the above //? correct answer

Explanation

See below explanation (A) With pointers, address of variables can be passed different functions can use this address to access the variables.
(B) When large structure variables passed or returned, they are copied as everything is passed and returned by value in C. This can be costly with
structure containing large data. To avoid this copying of large variables, we generally use pointer for large structures so that only address is copied.
(C) With pointers, we can implement “linked” data structures. Java uses reference variables to implement these data structures. Note that C doesn't support reference variables.
 */
