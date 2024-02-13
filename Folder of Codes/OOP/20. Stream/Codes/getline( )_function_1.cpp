#include<iostream>

using namespace std;

int main()
{
    char variable[20];

    cout<<"Enter text : ";
    cin.getline(variable, 20); // getline() function reads line by line
    cout<<variable;

    return 0;
}
