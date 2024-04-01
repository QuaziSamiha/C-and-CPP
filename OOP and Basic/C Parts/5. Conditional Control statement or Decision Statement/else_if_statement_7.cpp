// a program to check a year is leap year or not using else-if statement
#include<iostream>

using namespace std;

int main()
{
    int y;

    cout<<"Enter an year : ";
    cin>>y;

    if((y%400) == 0) // relational operator( == )
    {
        cout<<endl<<"Leap Year"<<endl;
    }
    else if((y%4 == 0) && (y%100 != 0)) // logical operator(&&) and relational operator( == , != )
    {
        cout<<endl<<"Leap Year"<<endl;
    }
    else
    {
        cout<<endl<<"Not Leap Year"<<endl;
    }
}
