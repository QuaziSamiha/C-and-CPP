// function returning more than one value because of using pass by address method
#include<iostream>

using namespace std;

void function_1(int, int, int*, int*);

int main()
{
    int variable_1, variable_2;

    function_1(45,25,&variable_1,&variable_2); // calling function and passing value, passing address

    cout<<"variable_1 : "<<variable_1<<endl;
    cout<<"variable_2 : "<<variable_2<<endl;
}

void function_1(int parameter_1, int parameter_2, int *pointer_parameter_1, int *pointer_parameter_2)
{
    *pointer_parameter_1 = parameter_1 + parameter_2;
    *pointer_parameter_2 = parameter_1 - parameter_2;
}
