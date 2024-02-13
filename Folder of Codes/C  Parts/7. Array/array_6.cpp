// symbolic constant in one dimensional array
#include<iostream>

#define ARRAY_SIZE 10 // array size can be changed easily from here

using namespace std;

int main()
{
    int array_name[ARRAY_SIZE];

    cout<<"Enter "<<ARRAY_SIZE<<" integers as array elements : ";
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cin>>array_name[i];
    }

    cout<<endl;

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout<<"array["<<i<<"] : "<<array_name[i]<<endl;
    }
}
