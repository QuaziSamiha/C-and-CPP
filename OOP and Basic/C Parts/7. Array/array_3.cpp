// copy all elements of an array to another array
// one dimensional array is also called linear array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many elements : ";
    cin>>n;

    int array_1[n], array_2[n];

    cout<<"Enter "<<n<<" elements for an array_1 : ";
    for(int i = 0; i < n; i++)
    {
        cin>>array_1[i];
    }

    for(int i = 0; i < n; i++) // copying each element of array_1 in array_2
    {
        array_2[i] = array_1[i];
    }

    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"array_2["<<i<<"] : "<<array_2[i]<<endl;
    }
}
