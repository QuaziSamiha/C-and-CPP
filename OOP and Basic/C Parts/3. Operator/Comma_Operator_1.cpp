#include<iostream>

using namespace std;

int main()
{
    int v1, v2;

    v1 = (v2=4, v2-1);

    cout<<"v1 : "<<v1<<endl;
}
