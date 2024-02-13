// adding and subtracting of numbers
// advantage of function : can do the same work multiple time easily
#include<iostream>

using namespace std;

int function_1(int, int); // function prototype (user defined function)

void function_2(int parameter_1, int parameter_2) // argument available but no return value (user defined function)
{
    cout<<endl<<"subtraction : "<<(parameter_1-parameter_2)<<endl;
}

int main()
{
    int variable_1, variable_2;
    cout<<"Enter two integers : ";
    cin>>variable_1>>variable_2;

    cout<<"sum_1 : "<<function_1(variable_1,variable_2)<<endl; // function called by value.variable_1,variable_2 are actual arguments
//--------------------------------------------------------------
    int variable_3 = function_1(12,10); // function called by value
    cout<<endl<<"sum_2 : "<<variable_3<<endl;
//--------------------------------------------------------------
    function_2(20,15); // function called by value
}

// arguments available and returning an integer value
int function_1(int parameter_1, int parameter_2) // declaring and defining function, parameter_1,parameter_2 are formal arguments
{
    return parameter_1+parameter_2;
}
