#include<iostream>
// 08.03.24
using namespace std;

// Dynamic Memory Allocation in One D Array

int main()
{
    int array_1[5], number, total = 0; // here array size is fixed

    cout<<"Enter how many elements : "; // memory cannot be allocated more than five elements
    cin>>number; // if enter more than five elements ,then garbage value will be shown
    // so to avoid this problem we use dynamic memory allocation

    cout<<endl<<"Enter elements : ";
    for(int i = 0; i < number; i++)
    {
        cin>>array_1[i];
    }

    cout<<"\nElements are : ";
    for(int i = 0; i < number; i++)
    {
        cout<<"\t "<<array_1[i];
        total = total + array_1[i];
    }

    cout<<endl<<"Total of array elements : "<< total <<endl;

    return 0;
}
