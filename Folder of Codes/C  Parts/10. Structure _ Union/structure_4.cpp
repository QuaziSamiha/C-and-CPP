// initialize structure variables
#include<iostream>

using namespace std;

struct structure // global structure
{
    int member_1;
    float member_2;
};

int main()
{
    struct structure variable_1 = {25, 45892.23}; // local variable initializing directly;
    struct structure variable_2, variable_3;

    // accessing member of the structure through structure type variable and dot operator and initializing
    // element-wise assignment
    variable_2.member_1 = 87;
    variable_2.member_2 = 453.44;

    // initializing structure variable using structure variable
    variable_3 = variable_2;

    cout<<"variable_1.member_1 : "<<variable_1.member_1<<endl;
    cout<<"variable_1.member_2 : "<<variable_1.member_2<<endl;

    cout<<endl;
    cout<<"variable_3.member_1 : "<<variable_3.member_1<<endl;
    cout<<"variable_3.member_2 : "<<variable_3.member_2<<endl;
}

