// x to the power y using user defined function
#include<iostream>

using namespace std;

void function_1(double, double);  // argument available but no return value

int main()
{
    double variable_1, variable_2;

    cout<<"Enter base : ";
    cin>>variable_1;
    cout<<"Enter power : ";
    cin>>variable_2;

    function_1(variable_1,variable_2);
}

void function_1(double parameter_1, double parameter_2) // user defined function
{
    int variable = 1;
    for(int i = 1; i <= parameter_2; i++)
    {
        variable = variable * parameter_1;
    }

    cout<<parameter_1<<" to the power "<<parameter_2<<" : "<<variable<<endl;
}
