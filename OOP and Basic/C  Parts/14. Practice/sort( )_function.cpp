#include<iostream>
#include<algorithm> // using for sort() function

using namespace std;

int n; // global variable

void display(int[]); // a user defined function for display array elements

int main()
{
    cout<<"Enter how many elements : ";
    cin>>n;

    int a[n]; // declaring array

    cout<<"Enter array elements : "<<endl;
    for(int i = 0; i < n; i++) // taking array elements as input from user
    {
        cout<<"a["<<i<<"] : ";
        cin>>a[i];
    }

    cout<<endl<<"Before sorting : ";
    display(a);

    sort(a, a+n);

    cout<<endl<<"After sorting : ";
    display(a);

    return 0;
}

void display(int arr[])
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"     ";
    }

    cout<<'\n';
}

/*
Sort in C++ Standard Template Library (STL)
Sorting is one of the most basic functions applied to data. It means arranging the data in a particular fashion, which can be increasing or decreasing. There is a builtin function in C++ STL by the name of sort().
This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort.By default, it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N*logN time, it switches to HeapSort and when the array size becomes really small, it switches to InsertionSort.
The prototype for sort is :

sort(startaddress, endaddress)

startaddress: the address of the first element of the array
endaddress: the address of the next contiguous location of the last element of the array.
So actually sort() sorts in the range of [startaddress,endaddress)
filter_none
*/