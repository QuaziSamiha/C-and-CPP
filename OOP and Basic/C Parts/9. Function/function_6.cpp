// function with no arguments and with no return value
#include<iostream>
#include<conio.h>

using namespace std;

void function_name(void); // function prototype

int main()
{
    cout<<"Main Function"<<endl<<endl;

    cout<<"After calling user defined function : "<<endl<<endl;
    function_name(); // function called
}

void function_name(void) // function declaration
{
    cout<<"It is a Function or Subprogram"<<endl;
}
