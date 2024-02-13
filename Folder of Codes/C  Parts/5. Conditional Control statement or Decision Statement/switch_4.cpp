// calculator
#include<iostream>

using namespace std;

int main()
{
    double n1, n2;
    char c;

    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
    cout<<"Enter an operator (+, -, *, /) : ";
    cin>>c;

    switch(c)
    {
    case '+':
    {
        cout<<endl<<n1<<" "<<c<<" "<<n2<<" = "<<n1+n2<<endl;
        break;
    }
    case '-':
    {
        cout<<endl<<n1<<" "<<c<<" "<<n2<<" = "<<n1-n2<<endl;
        break;
    }
    case '*':
    {
        cout<<endl<<n1<<" "<<c<<" "<<n2<<" = "<<n1*n2<<endl;
        break;
    }
    case '/':
    {
        cout<<endl<<n1<<" "<<c<<" "<<n2<<" = "<<n1/n2<<endl;
        break;
    }
    default :
    {
      cout<<endl<<"Not a valid operator"<<endl;
    }
    }
}
