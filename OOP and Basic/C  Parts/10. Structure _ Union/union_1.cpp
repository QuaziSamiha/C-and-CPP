// like structures, union is a user defined data type. In union all members share the same memory location.
#include<iostream>

using namespace std;

union union_name // declaring union
{
    int member_1, member_2;
}variable_1; // declaring union variable

int main()
{
    union union_name variable_2; // declaring union variable

    variable_2.member_1 = 14; // initializing union member through union variable and dot operator
    cout<<"variable_2.member_1 : "<<variable_2.member_1<<endl;
    cout<<"variable_2.member_2 : "<<variable_2.member_2<<endl;

    cout<<endl;

    variable_2.member_2 = 20; // initializing union member through union variable and dot operator
    cout<<"variable_2.member_1 : "<<variable_2.member_1<<endl;
    cout<<"variable_2.member_2 : "<<variable_2.member_2<<endl;
}

/*
union can be used in many situations where we want to use same memory for two or more members .
*/
