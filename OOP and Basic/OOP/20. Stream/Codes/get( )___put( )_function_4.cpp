#include<iostream>

using namespace std;

int main()
{
    char variable[30];

    cout<<"Enter text : "; // limited characters can be entered
    cin.get(variable, 30);

    cout<<variable;

    return 0;
}
