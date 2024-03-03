#include<iostream>

using namespace std;

// pointer to pointer

int main()
{
    int  variable_1 = 132;
    int  *variable_2;
    int  **variable_3; // it can hold address of *variable_2
//  int  ***variable_4; // it can hold address of **variable_3
// holding address of a pointer in another pointer

    variable_2 = &variable_1;
    variable_3 = &variable_2;

    cout<<"Value of variable_1                            : "<< variable_1 <<endl;
    cout<<"Value of variable_1 using pointer *variable_2  : "<< *variable_2 <<endl;
    cout<<"Value of variable_1 using pointer **variable_3 : "<< **variable_3 <<endl<<endl;

    cout<<"Address of variable_1 (&variable_1)                            : "<< &variable_1 <<endl;
    cout<<"Address of variable_1 using pointer *variable_2 (variable_2)   : "<< variable_2 <<endl;
    cout<<"Address of variable_1 using pointer **variable_3 (*variable_3) : "<< *variable_3 <<endl<<endl;

    cout<<"Address of pointer *variable_2 ( &variable_2 )                             : "<< &variable_2 <<endl;
    cout<<"Address of pointer *variable_2 using pointer **variable_3 ( variable_3 )   : "<< variable_3 <<endl<<endl;

    cout<<"Address of pointer **variable_3 using pointer **variable_3 ( &variable_3 ) : "<< &variable_3 <<endl<<endl;

    return 0;
}
