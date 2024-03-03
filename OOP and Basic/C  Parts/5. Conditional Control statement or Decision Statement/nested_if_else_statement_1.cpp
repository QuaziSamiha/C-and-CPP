// syntax of nested if-else statement
#include<iostream>

using namespace std;

int main()
{
    int v1, v2, v3, maximum;

    cout<<"Enter three integers : ";
    cin>>v1>>v2>>v3;

    if(v1 > v2)
    {
        if(v1 > v3)
        {
            maximum = v1;
        }
        else
        {
            maximum = v3;
        }
    }
    else
    {
        if(v2 > v3)
        {
            maximum = v2;
        }
        else
        {
            maximum = v3;
        }
    }

    cout<<endl<<"maximum : "<<maximum<<endl;
}
