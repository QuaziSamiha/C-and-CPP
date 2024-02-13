// x raised to the power y
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int x, y;

    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;

    double v = pow(x,y);

    cout<<endl<<x<<" to the power "<<y<<" is "<<v<<endl;
}

