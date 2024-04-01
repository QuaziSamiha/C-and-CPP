// menu base program
#include<iostream>

using namespace std;

int main()
{
    int v;
    float f, c;

    cout<<"Temperature conversion menu : "<<endl;
    cout<<"1. Celsius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celsius"<<endl;

    cout<<endl<<"Enter your choice : ";
    cin>>v;

    switch(v)
    {
    case 1:
    {
        cout<<"Enter Fahrenheit temperature : ";
        cin>>f;

        c = (f-32)/1.8;
        cout<<endl<<"Celsius temperature : "<<c<<endl;
        break;
    }
    case 2:
    {
        cout<<"Enter Celsius temperature : ";
        cin>>c;

        f = (1.8*c)+32;
        cout<<endl<<"Fahrenheit temperature : "<<c<<endl;
        break;
    }
    default :
    {
        cout<<endl<<"Not a correct option"<<endl;
    }
    }
}
