// input structure element
#include<iostream>

using namespace std;

struct structure // global structure
{
    int member_1;
    float member_2;
};

struct structure variable_3; // global variable

int main()
{
    struct structure variable_1, variable_2; // local variable

    // accessing member of the structure through structure type variable and dot operator and taking input
    cout<<"Enter an integer : ";
    cin>>variable_1.member_1;
    cout<<"Enter a float : ";
    cin>>variable_1.member_2;

    cout<<endl;
    cout<<"variable_1.member_1 : "<<variable_1.member_1<<endl;
    cout<<"variable_1.member_2 : "<<variable_1.member_2<<endl;

    cout<<endl;
    // accessing member of the structure through structure type variable and dot operator and taking input
    cout<<"Enter an integer : ";
    cin>>variable_3.member_1;
    cout<<"Enter a float : ";
    cin>>variable_3.member_2;

    cout<<endl;
    cout<<"variable_3.member_1 : "<<variable_3.member_1<<endl;
    cout<<"variable_3.member_2 : "<<variable_3.member_2<<endl;
}

