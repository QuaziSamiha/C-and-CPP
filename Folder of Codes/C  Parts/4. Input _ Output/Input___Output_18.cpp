// formatting output using showpoint and setprecision() and fixed
#include<iostream>
#include<iomanip> // for setprecision() function
// input output manipulation

using namespace std;

int main()
{
    int v1, v2;

    cout<<"Enter two integers : ";
    cin >> v1 >> v2; // input : 4 and 3

    float v3 = v1 + v2;
    cout<<endl<<"sum : "<<v3<<endl; // output : 7
//-----------------------------------------------------------------------------------------------
    cout<<showpoint;

    v3 = v1 + v2;  // check using -,/,*
    cout<<endl<<"sum : "<<v3<<endl; // output : 7.00000

    cout<<setprecision(3); // it counts before and after decimal point
    cout<<endl<<"sum : "<<v3<<endl; // output : 7.00

    // now it will count only after decimal point
    cout<<fixed;
    cout<<setprecision(3); // now it will count only after decimal point
    cout<<endl<<"sum : "<<v3<<endl; // output : 7.000
}

