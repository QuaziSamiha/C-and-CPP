#include<iostream>

using namespace std;

int main()
{
    int v1;
    short v2;

    cout<<"integer : "<<sizeof(v1)<<" bytes"<<endl;
    cout<<"short : "<<sizeof(v2)<<" bytes"<<endl;
    cout<<"float : "<<sizeof(float)<<" bytes"<<endl;

    double v3;
    char v4[20];
    char v5;

    int v6 = sizeof(v3);
    cout<<"double : "<<v6<<" bytes"<<endl;

    v6 = sizeof(v4);
    cout<<"character array : "<<v6<<" bytes"<<endl;

    v6 = sizeof(v5);
    cout<<"character : "<<v6<<" bytes"<<endl;
}
