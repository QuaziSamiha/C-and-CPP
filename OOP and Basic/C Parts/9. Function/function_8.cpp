// function with arguments and with no return value
#include<iostream>
#include<conio.h>

using namespace std;

void function_name(int, int); // function prototype

int main()
{
    int v1,v2;

    cout<<"Main Function : "<<endl;
    cout<<"Enter two integers : ";
    cin>>v1>>v2;

    function_name(v1,v2); // function called

    cout<<endl<<"C++ Programming"<<endl;
}

void function_name(int parameter_1, int parameter_2) // function declaration
{
    int variable;
    variable = parameter_1 + parameter_2;

    cout<<endl<<"User Defined Function : "<<variable<<endl;
}

