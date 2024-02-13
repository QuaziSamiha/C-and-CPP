#include<iostream>

using namespace std;

int main()
{
    char variable[20];

    cout<<"Enter text : ";
    cin.getline(variable, 20, 'r'); // here terminating character is r or 20 characters in getline() function
    // by default terminating character for getline() function is new line (pressing enter )
    cout<<variable;

    return 0;
}
