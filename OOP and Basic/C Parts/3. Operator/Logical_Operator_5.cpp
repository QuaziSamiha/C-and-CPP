// a program to check a year is leap year or not using logical operators
#include<iostream>

using namespace std;

int main()
{
    int y;

    cout<<"Enter an year : ";
    cin>>y;

    if((y%400 == 0) || (y%4 == 0 && y%100 != 0)) // relational operator( == ), logical operator(&&) and relational operator( == , != )
    {
        cout<<endl<<"Leap Year"<<endl;
    }
    else
    {
        cout<<endl<<"Not Leap Year"<<endl;
    }
}
