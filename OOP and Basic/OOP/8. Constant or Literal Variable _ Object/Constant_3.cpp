// const keyword with function parameter  // (2:02am,6 May,2020 & 12:46pm,16 August,2020)
#include<iostream>

using namespace std;

// constant variable cannot be changed. we can only use it.

void function_2(const int);

int main()
{
    int variable = 5,

    function_1(variable);
    function_2(variable);
}

void function_1(int parameter)
{
    parameter = parameter + 2;
    cout << "parameter : " << parameter << endl;
}

void function_2(const int parameter)
{
    //parameter = parameter + 2; it will show an error
    cout<<"constant_parameter : "<<parameter<<endl;
}


