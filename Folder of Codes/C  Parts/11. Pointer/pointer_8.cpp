// pointer to pointer
#include<iostream>

using namespace std;

int main()
{
    int variable = 435;

    int *pointer_1;
    int **pointer_2;

    pointer_1 = &variable;
    pointer_2 = &pointer_1;

    cout<<"value of variable                              : "<< variable <<endl;
    cout<<"value of variable using  pointer (*pointer_1)  : "<< *pointer_1 <<endl;
    cout<<"value of variable using  pointer (**pointer_2) : "<< **pointer_2 <<endl<<endl;

    cout<<"address of variable (&variable)                : "<< &variable <<endl;
    cout<<"address of variable using pointer (pointer_1)  : "<< pointer_1 <<endl;
    cout<<"address of variable using pointer (*pointer_2) : "<< *pointer_2 <<endl<<endl;

    cout<<"address of pointer_1 (&pointer_1)                  : "<< &pointer_1 <<endl;
    cout<<"address of pointer_1 using pointer_2 (pointer_2) : "<< pointer_2 <<endl;
    cout<<"address of pointer_2 (&pointer_2)                : "<< &pointer_2 <<endl<<endl;
}
