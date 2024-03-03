// using goto statement we can move from one place to another place in program
#include<iostream>

using namespace std;

int main()
{
    int i = 1;

label_name:
    cout<<i<<endl;
    i++;

    if(i < 5)
    {
        goto label_name; // label is calling here
    }

    return 0;
}
