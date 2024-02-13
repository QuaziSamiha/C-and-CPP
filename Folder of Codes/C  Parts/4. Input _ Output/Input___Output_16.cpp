// formatting output using showpoint and noshowpoint
#include<iostream>

using namespace std;

int main()
{
    int v1, v2;

    cout<<"Enter two integers : ";
    cin >> v1 >> v2; // input : 4 and 3

    float v3 = v1 + v2;
    cout<<endl<<"sum : "<<v3<<endl; // output : 7
//-------------------------------------------------------------------------------------------------------
    cout<<showpoint;

    v3 = v1 + v2;  // check using -,/,*
    cout<<endl<<"sum : "<<v3<<endl; // output : 7.00000

    float v4 = 12;
    cout<<endl<<"v4 : "<<v4<<endl; // output : 12.0000
//-------------------------------------------------------------------------------------------------------
    cout<<noshowpoint;

    v3 = v1 + v2; // check using -,/,*
    cout<<endl<<"sum : "<<v3<<endl; // output : 7

    v4 = 12;
    cout<<endl<<"v4 : "<<v4<<endl; // output : 12
}
