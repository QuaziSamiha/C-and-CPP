#include<iostream>

using namespace std;

int main()
{
    char variable[30];

    cout<<"Enter text and terminate by t : "; // limited characters can be entered
    cin.get(variable, 30, 't'); // whenever t is entered , program will terminate
    cout<<variable;

    return 0;
}
