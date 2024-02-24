// sum and average of an array
#include<iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout<<"Enter how many elements : ";
    cin>>n;

    int a[n]; // declaring array

    cout<<"Enter "<<n<<" elements for an array : ";
    for(int i = 0; i < n; i++) // using loop for taking input and adding them
    {
        cin>>a[i];
        sum = sum + a[i];
    }

    /*
    for(int i = 0; i < n; i++)
    {
       sum = sum + a[i];
    }
    */
    cout<<"sum : "<<sum<<endl;
    // float average = (float)sum/n;
    cout<<"average : "<< (float)sum/n <<endl; // type casting
}
