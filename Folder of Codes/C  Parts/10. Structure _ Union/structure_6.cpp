// array of structure
#include<iostream>

using namespace std;

struct structure // global structure
{
    int member_1;
    float member_2;
};

int main()
{
    struct structure array_1[3];

    for(int i = 0; i < 3; i++)
    {
        cout<<"Enter information for structure array element["<<i<<"] : "<<endl;
        cout<<"Enter an integer : ";
        cin>>array_1[i].member_1;
        cout<<"Enter a float : ";
        cin>>array_1[i].member_2;
    }

    cout<<endl;
    for(int i = 0; i < 3; i++)
    {
        cout<<"Information for structure array element["<<i<<"] : "<<endl;

        cout<<"array_1["<<i<<"].member_1 : "<<array_1[i].member_1<<endl;
        cout<<"array_1["<<i<<"].member_2 : "<<array_1[i].member_2<<endl<<endl;
    }
}
