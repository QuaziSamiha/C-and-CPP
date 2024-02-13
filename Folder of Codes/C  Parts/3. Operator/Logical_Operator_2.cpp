// we can use logical operator to reduce statements in program
// a program to find out maximum number among three numbers using logical AND operator
#include<iostream>

using namespace std;

int main()
{
    int n1, n2, n3, maximum;

    cout<<"Enter three integers : ";
    cin>>n1>>n2>>n3;

    if((n1 > n2) && (n1 > n3))
    {
        cout<<endl<<"Maximum : "<<n1<<endl;
    }
    else if((n2 > n1) && (n2 > n3))
    {
        cout<<endl<<"Maximum : "<<n2<<endl;
    }
    else if((n3 > n1) && (n3 > n2))
    {
        cout<<endl<<"Maximum : "<<n3<<endl;
    }
    else
    {
        cout<<endl<<"Numbers are equals"<<endl;
    }
}

/*

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

*/
