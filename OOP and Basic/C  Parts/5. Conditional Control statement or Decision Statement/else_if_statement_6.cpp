// a program to check whether a number is negative or positive using else-if-else statement
#include<iostream>

using namespace std;

int main()
{
    int v;

    cout<<"Enter a number : ";
    cin>>v;

    if(v > 0) // other conditions will be checked when this if condition is not true otherwise not
    {
        cout<<endl<<"Positive"<<endl;
    }
    else if(v < 0) // this else-if condition will be checked only when the if condition is not true
    {
        cout<<endl<<"Negative"<<endl;
    }
    else // this statement will run only when above conditions are false
    {
        cout<<endl<<"Zero"<<endl;
    }
}

/*

int main()
{
    int v;

    cout<<"Enter an integer : ";
    cin>>v;

    // each of this condition will be checked,this problem can be solved using else-if statement (else_if_statement_6.cpp file)

    if(v > 0) // it will be checked
    {
        cout<<"Positive"<<endl;
    }
    if(v < 0)  // it will be checked
    {
        cout<<"Negative"<<endl;
    }
    if(v == 0)  // it will be checked
    {
        cout<<"Zero"<<endl;
    }

    return 0;
}

*/
