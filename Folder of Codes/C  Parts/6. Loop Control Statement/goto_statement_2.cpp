#include<iostream>

using namespace std;

int main()
{
    int a = 12;

samiha:
    for(int i = 1; i <= 5; i++)
    {
        cout<<arr<<" x "<<i<<" = "<<arr*i<<endl;
    }

    cout<<endl<<endl;
    a--;

    if(a > 7)
    {
        goto samiha;
    }

    return 0;
}
