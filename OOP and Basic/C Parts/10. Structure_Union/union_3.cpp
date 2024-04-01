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
    union_variable.member = 24;

    cout<<"member_string : "<<union_variable.member_string<<endl; // it will show garbage value
    // since member_string & member sharing same memory location
    cout<<"member : "<<union_variable.member<<endl;
}
