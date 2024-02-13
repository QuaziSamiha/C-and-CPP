// syntax of else-if statement
#include<iostream>

using namespace std;

int main()
{
    int v;

    cout<<"Enter an integer : ";
    cin>>v;

    if(v <= 30)
    {
        cout<<"C Program"<<endl;
    }
    else if(v <= 40)
    {
        cout<<"C++ Programming"<<endl;
    }
    else if(v <= 50)
    {
        cout<<"Java Programming"<<endl;
    }
    else
    {
        cout<<"Python Programming"<<endl;
    }
}
