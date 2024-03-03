// structure is a collection of variables of different data type under a single name
// a structure is a user defined data type in C/C++
#include<iostream>

using namespace std;

int main()
{
    struct structure // local structure
    {
        int member_1;
        float member_2;
    };

    struct structure variable_1, variable_2; // local variable

    // accessing member of the structure through variable and dot operator
    variable_1.member_1 = 23;
    variable_1.member_2 = 2132.34;

    cout<<"variable_1.member_1 : "<<variable_1.member_1<<endl;
    cout<<"variable_1.member_2 : "<<variable_1.member_2<<endl;

    // accessing member of the structure  through variable and dot operator
    variable_2.member_1 = 25;
    variable_2.member_2 = 88762.324;

    cout<<endl<<"variable_2.member_1 : "<<variable_2.member_1<<endl;
    cout<<"variable_2.member_2 : "<<variable_2.member_2<<endl;
}
