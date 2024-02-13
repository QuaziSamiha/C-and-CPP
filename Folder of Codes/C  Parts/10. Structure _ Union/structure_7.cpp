// array within structure
#include<iostream>

using namespace std;

struct structure // global structure
{
    char member_array[20]; // character type array = string
    int member;
};

int main()
{
    struct structure array_1[3];

    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter information for structure array element["<<i<<"] : "<<endl;
        cout<<"Enter an integer : ";
        cin>>array_1[i].member;
        cout<<"Enter a string : ";
        cin>>array_1[i].member_array;
    }

    cout<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Information for structure array element["<<i<<"] : "<<endl;

        cout<<"array_1["<<i<<"].member : "<<array_1[i].member<<endl;
        cout<<"array_1["<<i<<"].member_array : "<<array_1[i].member_array<<endl<<endl;
    }
}
