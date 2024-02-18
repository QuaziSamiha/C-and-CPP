#include<iostream>

using namespace std;

int main()
{
    int a = 12;

samiha:
    for(int i = 1; i <= 5; i++)
    {
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
    }

    cout<<endl<<endl;
    a--;

    if(a > 7)
    {
        goto samiha;
    }

    return 0;
}
