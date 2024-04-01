// function with arguments and with return value
#include<iostream>
#include<conio.h>

using namespace std;

int function_name(int, int); // function prototype

int global_variable = 100;

int main()
{
    int v1,v2, local_variable;

    cout<<"Main Function : "<<endl;
    cout<<"Enter two integers : ";
    cin>>v1>>v2;

    local_variable = function_name(v1,v2); // function called
    cout<<endl<<"From User Defined Function : "<<local_variable<<endl;

    cout<<endl<<"C++ Programming"<<endl;
}

int function_name(int parameter_1, int parameter_2) // function declaration
{
    int local_variable;
    local_variable = parameter_1 + parameter_2;

    return (local_variable+global_variable);
}

