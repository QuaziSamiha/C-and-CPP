// passing array to function
#include<iostream>

using namespace std;

void function_name(int parameter[])
{
    int variable = parameter[0];
    for(int i = 0; i < 6; i++)
    {
        cout<<parameter[i]<<"  ";

        if(variable < parameter[i])
        {
            variable = parameter[i];
        }
    }
    cout<<endl<<"maximum : "<<variable<<endl;
}

int main()
{
    int array_name[] = {11,10,99,44,76,66};

    function_name(array_name);

    cout<<endl;
}
