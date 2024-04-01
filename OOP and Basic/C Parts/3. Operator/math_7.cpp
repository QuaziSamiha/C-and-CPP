// swapping two numbers without using temporary variable
#include<iostream>

using namespace std;

int main()
{
    int n1 = 34;
    int n2 = 12;

    cout<<"Before Swapping : "<<endl;
    cout<<"n1 : "<<n1<<endl;
    cout<<"n2 : "<<n2<<endl;

    int temp;

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout<<endl<<"After Swapping : "<<endl;
    cout<<"n1 : "<<n1<<endl;
    cout<<"n2 : "<<n2<<endl;
}
