#include<iostream>

using namespace std;

int main()
{
    int v1 = 7;
    int v2 = 2;
    float v3;

    v3 = v1/(float)v2; // v2 becomes float in this expression

    cout<<"v3 : "<<v3<<endl;

    return 0;
}
