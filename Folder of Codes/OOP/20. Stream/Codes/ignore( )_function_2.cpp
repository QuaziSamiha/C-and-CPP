#include<iostream>

using namespace std;

int main()
{
    char variable_1[20];
    int variable_2;

    cout<<"Enter any integer : ";
    cin>>variable_2;
    cin.ignore(); // for clearing buffer
    cout<<"Enter text : ";
    cin.getline(variable_1, 20); // this line of code will be ignored if we don't use ignore() function

    cout<<variable_1<<endl;
    cout<<variable_2<<endl;

    return 0;
}
