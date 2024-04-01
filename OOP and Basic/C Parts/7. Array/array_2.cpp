// taking element no. and elements as input from
//user of an array using for loop
#include<iostream>

using namespace std;

int main()
{
    int array_name[100], variable;

    cout<<"Enter how many elements : ";
    cin>>variable;

    cout<<endl<<"Enter "<<variable<<" elements for an array : ";
    for(int i = 0; i < variable; i++)
    {
        cin>>array_name[i];
    }

    cout<<endl<<"Entered array : "<<endl;
    for(int i = 0; i < variable; i++)
    {
        cout<<"array["<<i<<"] : "<<array_name[i]<<endl;
    }
    cout<<endl;
}
