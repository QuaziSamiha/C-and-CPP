// passing array to function and also passing its size
#include<iostream>

using namespace std;

void function_name(int parameter_1[], int parameter_2)
{
    int variable = parameter_1[0];
    for(int i = 0; i < parameter_2; i++)
    {
        cout<<parameter_1[i]<<"  ";

        if(variable < parameter_1[i])
        {
            variable = parameter_1[i];
        }
    }
    cout<<endl<<"maximum : "<<variable<<endl;
}

int main()
{
    int array_name[] = {11,10,99,44,76,66};

    function_name(array_name,6);

    cout<<endl;
}

