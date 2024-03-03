// 2D character array for string
#include<iostream>

using namespace std;

int main()
{
    char array_name[2][20];

    for(int i = 0; i < 2; i++)
    {
        cout<<"Enter strings : ";
        cin>>array_name[i];
    }

    for(int i = 0; i < 2; i++)
    {
        cout<<endl<<"Entered : "<<endl;
        cout<<array_name[i]<<endl;
    }

    return 0;
}

