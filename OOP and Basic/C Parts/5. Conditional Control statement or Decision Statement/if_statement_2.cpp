// if statement with relational operator
#include<iostream>

using namespace std;

int main()
{
    int n;

    cout<<"Enter an integer : ";
    cin>>n;

    if(n%2 == 0)
    {
        cout<<endl<<"Even"<<endl;
    }
    if(n%2 != 0)
    {
        cout<<endl<<"Odd"<<endl;
    }
}

/*
int main()
{
    int n;

    cout<<"Enter an integer : ";
    cin>>n;

    if(n%2 == 0)
    {
        cout<<endl<<"Even"<<endl;
    }
    else
    {
        cout<<endl<<"Odd"<<endl;
    }
}
*/
