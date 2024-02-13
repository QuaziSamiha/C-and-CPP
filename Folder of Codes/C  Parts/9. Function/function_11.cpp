// default values for parameters
#include<iostream>

using namespace std;

void function_name(int parameter_1 = 11, int parameter_2 = 34)
{
    cout<<"parameter_1 : "<<parameter_1<<endl;
    cout<<"parameter_2 : "<<parameter_2<<endl<<endl;
}
int main()
{
    function_name();

    function_name(25);

    function_name(67,98);
}
