// a program to find out a character is capital or small latter using else-if statement
#include<iostream>

using namespace std;

int main()
{
    char v;

    cout<<"Enter a character : ";
    cin>>v;

    if((v >= 'a') && (v <= 'z'))
    {
        cout<<endl<<"Small latter"<<endl;
    }
    else if((v >= 'A') && (v <= 'Z'))
    {
       cout<<endl<<"Capital latter"<<endl;
    }
    else
    {
        cout<<endl<<"It's not a latter"<<endl;
    }
}

