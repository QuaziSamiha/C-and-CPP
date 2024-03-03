// pass by address (use of pointer) and pass by value
#include<iostream>

using namespace std;

void function_1(int, int); // function prototype for pass by value

void function_2(int*, int*); // function prototype for pass by address

int main()
{
    int variable_1 = 11, variable_2 = 33;

    cout<<"  Pass by Value : "<<endl;

    cout<<"Before calling function_1() : "<<endl;
    cout<<"variable_1 : "<<variable_1<<endl;
    cout<<"variable_2 : "<<variable_2<<endl<<endl;

    function_1(variable_1, variable_2); // calling user defined function and passing value

    cout<<"After calling function_1() : "<<endl;
    cout<<"variable_1 : "<<variable_1<<endl;
    cout<<"variable_2 : "<<variable_2<<endl<<endl;

    cout<<"  Pass by Address : "<<endl;

    cout<<"Before calling function_2() : "<<endl;
    cout<<"variable_1 : "<<variable_1<<endl;
    cout<<"variable_2 : "<<variable_2<<endl<<endl;

    function_2(&variable_1, &variable_2); // calling user defined function and passing address

    cout<<"After calling function_2() : "<<endl;
    cout<<"variable_1 : "<<variable_1<<endl;
    cout<<"variable_2 : "<<variable_2<<endl;
}

void function_1(int parameter_1, int parameter_2) // definition of function
{
    parameter_1 = 690;
    parameter_2 = 240;
}

void function_2(int *pointer_parameter_1, int *pointer_parameter_2) // definition of function
{
    *pointer_parameter_1 = 45;
    *pointer_parameter_2 = 62;
}

/*
Pass by Value : 
Before calling function_1() : 
variable_1 : 11
variable_2 : 33

After calling function_1() : 
variable_1 : 11
variable_2 : 33

  Pass by Address : 
Before calling function_2() : 
variable_1 : 11
variable_2 : 33

After calling function_2() : 
variable_1 : 45
variable_2 : 62
*/