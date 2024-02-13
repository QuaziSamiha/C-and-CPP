// Function Overloading Exact Match  (12:20am,17 May,2020 & 10:19am,19 August,2020)
#include<iostream>

using namespace std;

void function_overloading(int);
void function_overloading(char);

int main()
{
    function_overloading('a');

    return 0;
}

void function_overloading(int parameter)
{
    cout<<"integer : "<<parameter<<endl;
}

void function_overloading(char parameter)// exact match
{
    cout<<"char : "<<parameter<<endl;
}
