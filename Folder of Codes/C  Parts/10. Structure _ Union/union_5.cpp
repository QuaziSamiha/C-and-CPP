#include<iostream>

using namespace std;

union union_name
{
    char member_string[7];
    int member;
};

int main()
{
    union union_name union_variable_1 = {"Samiha"}; // it can store one item at a time

    union union_name union_variable_2;
    union_variable_2.member = 24;

    cout<<"union_variable_1.member_string : "<<union_variable_1.member_string<<endl;
    cout<<"union_variable_2.member : "<<union_variable_2.member<<endl;
}
