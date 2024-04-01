// use of relational operator and understanding why we use else if statement
#include<iostream>

using namespace std;

int main()
{
    float n;

    cout<<"Enter any number : ";
    cin>>n;

    if(n >= 80) // when this if condition is true, we no need to check other conditions
    {
        cout<<"A+"<<endl;
    }
    else if(n >= 70) // this else-if condition will be checked only when if condition is not true
    {
        cout<<"A"<<endl;
    }
    else if(n >= 60) // when above conditions are not true,this condition will be checked
    {
        cout<<"A-"<<endl;
    }
    else if(n >= 50) // when above conditions are not true,this condition will be checked
    {
        cout<<"B"<<endl;
    }
    else if(n >= 40) // when above conditions are not true,then this condition will be checked
    {
        cout<<"C"<<endl;
    }
    else if(n >= 33) // when above conditions are not true, then this condition will be checked
    {
        cout<<"D"<<endl;
    }
    else // this statement will run only when no conditions of above is true
    {
        cout<<"F"<<endl;
    }
}
