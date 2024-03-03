// nesting structure
#include<iostream>

using namespace std;

struct structure_1
{
    int structure_1_member;

    struct structure_2 // nesting structure : structure within structure
    {
        int structure_2_member_1;
        float structure_2_member_2;
    } structure_2_variable;
};

int main()
{
    struct structure_1  structure_1_variable;

    cout<<"Enter an integer for structure_1 : ";
    cin>>structure_1_variable.structure_1_member;

    cout<<"Enter an integer for nesting structure (structure_2) : ";
    cin>>structure_1_variable.structure_2_variable.structure_2_member_1;
    cout<<"Enter a float for nesting structure (structure_2) : ";
    cin>>structure_1_variable.structure_2_variable.structure_2_member_2;

    cout<<endl;
    cout<<"structure_1_variable.structure_1_member : "<<structure_1_variable.structure_1_member<<endl<<endl;
    cout<<"structure_1_variable.structure_2_variable.structure_2_member_1 : "<<structure_1_variable.structure_2_variable.structure_2_member_1<<endl;
    cout<<"structure_1_variable.structure_2_variable.structure_2_member_2 : "<<structure_1_variable.structure_2_variable.structure_2_member_2<<endl;
}
