#include<iostream>

using namespace std;

int main()
{
    int v;

    cout<<"Enter an integers : ";
    cin>>v;

    (v%2 == 0) ? cout<<endl<<v<<" is even"<<endl : cout<<endl<<v<<" is odd"<<endl;

    return 0;
}
