// pointer pointing to different variable
#include<iostream>

using namespace std;

int main()
{
    int variable_1 = 23, variable_2 = 70, variable_3 = 11;

    int *pointer_variable;

    pointer_variable = &variable_1;
    cout<<"variable_1 : "<< *pointer_variable <<endl;

    pointer_variable = &variable_2;
    cout<<"variable_2 : "<< *pointer_variable <<endl;

    pointer_variable = &variable_3;
    cout<<"variable_3 : "<< *pointer_variable <<endl;
}

/*
variable_1 : 23
variable_2 : 70
variable_3 : 11
*/