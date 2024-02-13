#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    int v1 = 3;
    cout<<"v1 : "<< v1 <<endl;

    ++v1; // prefix increment : increments v1 by one before it is used
    cout<<"++v1 : "<< v1 <<endl; // prefix increment

    cout<<"++v1 : "<< ++v1 <<endl; // prefix increment

    cout<<"v1 : "<< v1 <<endl;

    cout<<"v1++ : "<< v1++ <<endl; // postfix increment : increments v1 by one after it is used

    cout<<"v1 : "<< v1 <<endl; // postfix increment
}
