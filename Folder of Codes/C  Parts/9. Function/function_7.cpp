// function with no arguments and with return value
#include<iostream>
#include<conio.h>

using namespace std;

int function_name(void); // function prototype

int main()
{
    int variable;

    variable = function_name(); // function called
    cout<<"Addition : "<<variable<<endl;
}

int function_name(void) // function declaration
{
    int v1,v2, v3;

    cout<<"Enter two integers : ";
    cin>>v1>>v2;

    v3 = v1 + v2;

    return (v3);
}
