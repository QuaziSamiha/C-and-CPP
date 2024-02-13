#include<iostream>

using namespace std;

// Using Pointer And Array

int main()
{
    int array_1[] = {21,32,10,4,25};
    int *pointer;

    pointer = &array_1[0];  // pointer = array_1 ;

    cout<<"Value : "<< *pointer <<endl;

    pointer++; // increment to next address
    cout<<"Value : "<< *pointer <<endl;

    pointer--; // decrement to previous address
    cout<<"Value : "<< *pointer <<endl;

    cout<<endl;

    int array_2[] = {15,46,72,18};
    int *pointer_1;

    pointer_1 = array_2;  // pointer_1 = &array_2[0] ;

    cout<<"Value : "<< *pointer_1 <<endl;

    pointer_1++; // increment to next address
    cout<<"Value : "<< *pointer_1 <<endl;

    pointer_1--; // decrement to previous address
    cout<<"Value : "<< *pointer_1 <<endl;

    return 0;
}
