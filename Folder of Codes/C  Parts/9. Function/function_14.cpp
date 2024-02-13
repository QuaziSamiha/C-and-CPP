// recursion function ( finding factorial)
// recursion is a process where a function can call itself
// to stop calling we need a base case
#include<iostream>

using namespace std;

int recursion_function(int); // function prototype

int main()
{
    int variable = recursion_function(5);

    cout<<"factorial of 5 : "<<variable<<endl;
}

int recursion_function(int parameter)
{
    if(parameter == 1) // base case
    {
        return 1;
    }
    else
    {
        return parameter*recursion_function(parameter-1);
    }
}
