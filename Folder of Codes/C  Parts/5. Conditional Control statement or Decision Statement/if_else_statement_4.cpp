// finding absolute number without using library function using if-else statement
#include<iostream>

using namespace std;

int main()
{
    int v;

    cout<<"Enter an integer : ";
    cin>>v;

    if(v < 0)
    {
        cout<<endl<<"Absolute value of "<<v<<" : "<<(-v)<<endl;
    }
    else
    {
       cout<<endl<<"Absolute value of "<<v<<" : "<<v<<endl;
    }

    return 0;
}
