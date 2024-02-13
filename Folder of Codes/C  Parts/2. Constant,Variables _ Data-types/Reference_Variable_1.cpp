#include<iostream> // (2:57pm,15 August,2020)

using namespace std;

int main()
{
    int variable = 35;
    int &reference_variable = variable;

    cout << "value of variable             : " << variable << endl;
    cout << "value of reference_variable   : " << reference_variable << endl;
    cout << "address of variable           : " << &variable << endl;
    cout << "address of reference_variable : " << &reference_variable << endl;
}

/*
A reference variable is an alias, that is, another name for an already existing variable. Once a reference is initialized with a variable,
either the variable name or the reference name may be used to refer to the variable.

References vs Pointers
References are often confused with pointers but three major differences between references and pointers are:
1. You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.
2. Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another
object at any time.
3. A reference must be initialized when it is created. Pointers can be initialized at any time.
4. We can make array of pointer but we can not make array of reference variable
*/
