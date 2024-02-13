// syntax of if statement
// if statement with logical and relational operator
// any meaningful expression is called a statement
#include<iostream>

using namespace std;

int main()
{
    int v1 = 4, v2;

    cout<<"Enter an integer : ";
    cin>>v2;

    if((v1 == 4) && (v2 == 4))
    {
        cout<<endl<<"C Programming"<<endl;
    }

    if((v1 == 4) || (v2 == 4))
    {
        cout<<endl<<"C++ Programming"<<endl;
    }
}
