#include<iostream>  // conditional or ternary operator (? : )

using namespace std;

int main()
{
    int v1, v2;

    cout<<"Enter two integers : ";
    cin>>v1>>v2;

    int maximum = (v1 > v2) ? v1 : v2;
    cout<<endl<<"maximum integer : "<<maximum<<endl;
}

