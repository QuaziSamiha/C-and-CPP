// syntax of switch and its rules
// write a program that read a digit and display its spelling
#include<iostream>

using namespace std;

int main()
{
    int variable;  // here variable cannot be float type

    cout<<"Enter any integer : ";
    cin>>variable;

    switch(variable)
    {
    case 0:
    {
        cout<<endl<<"Zero"<<endl;
        break; // all the statements following a matching case execute until a break statement is reached
    }
    case 1:
    {
        cout<<endl<<"One"<<endl;
        break;
    }
    case 2:
    {
        cout<<endl<<"Two"<<endl;
        break;
    }
    case 3: // two case labels cannot have same value
    {
        cout<<endl<<"Three"<<endl;
        break;
    }
    case 4:
    {
        cout<<endl<<"Four"<<endl;
        break;
    }
    case 5:
    {
        cout<<endl<<"Five"<<endl;
        break;
    }
    case 6:
    {
        cout<<endl<<"Six"<<endl;
        break;
    }
//  variable = variable + 1; this statement will not be executed (statements written above cases are never executed)
    case 7:
    {
        cout<<endl<<"Seven"<<endl;
        break;
    }
    case 8:
    {
        cout<<endl<<"Eight"<<endl;
        break;
    }
    case 9:
    {
        cout<<endl<<"Nine"<<endl;
        break;
    }
    default: // the default block can be placed anywhere
    {
        cout<<endl<<"Not valid"<<endl;
    }
    }
}
