// mixed mode operation and automatic implicit conversion
#include<iostream>

using namespace std;

int main()
{
    int v1 = 15;
    float v2;
    float v3 = 3.1;
    int v4;

    v2 = v1*v3;   // v1 will convert into float automatically
    cout<<"v2 : "<<v2<<endl;

    v4 = v1*v3;
    cout<<"v4 : "<<v4<<endl;

    return 0;
}
