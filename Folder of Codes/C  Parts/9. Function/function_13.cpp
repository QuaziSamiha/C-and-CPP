// function overloading
#include<iostream>

using namespace std;

void function_name(int, int);
void function_name(int, int, int);

int main()
{
    function_name(12, 12);
    function_name(10,20,30);
}

void function_name(int parameter_1, int parameter_2)
{
    int local_variable = parameter_1 + parameter_2;
    cout<<"Sum : "<<local_variable<<endl;
}

void function_name(int parameter_1, int parameter_2, int parameter_3)
{
    int local_variable = parameter_1 + parameter_2 + parameter_3;
    cout<<"Sum : "<<local_variable<<endl;
}
