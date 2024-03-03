// structure comparison
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
    variable_2.member_1 = 87;
    variable_2.member_2 = 453.44;

    // initializing structure variable using structure variable
    variable_3 = variable_2;

    // comparing variable_1 with variable_2 for each member
    if(variable_1.member_1 == variable_2.member_1 && variable_1.member_2 == variable_2.member_2)
    {
        cout<<"variable_1 equal to variable_2"<<endl;
    }
    else
    {
        cout<<"variable_1 not equal to variable_2"<<endl;
    }

    // comparing variable_2 with variable_3 for each member
    if(variable_2.member_1 == variable_3.member_1 && variable_2.member_2 == variable_3.member_2)
    {
        cout<<"variable_2 equal to variable_3"<<endl;
    }
    else
    {
        cout<<"variable_2 not equal to variable_3"<<endl;
    }
}

