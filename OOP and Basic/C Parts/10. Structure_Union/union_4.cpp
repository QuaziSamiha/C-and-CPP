#include<iostream>

using namespace std;

union union_name
{
    char member_string[7];
    int member;
};

int main()
{
    union union_name union_variable = {"Samiha"}; // it can store one item at a time

    cout<<"member_string : "<<union_variable.member_string<<endl;

    union_variable.member = 24;

    cout<<"member : "<<union_variable.member<<endl;
}

// using union we can get update value or information
