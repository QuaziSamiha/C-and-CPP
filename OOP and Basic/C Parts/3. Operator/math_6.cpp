// swapping two numbers using temporary variable
#include<iostream>

using namespace std;

int main()
{
    int n1 = 34;
    int n2 = 12;

    cout<<"Before Swapping : "<<endl;
    cout<<"n1 : "<<n1<<endl;
    cout<<"n2 : "<<n2<<endl;

    n1 = n1 - n2; // 34 - 12 = 22
    n2 = n1 + n2; // 22 + 12 = 34
    n1 = n2 - n1; // 34 - 22 = 12

    cout<<endl<<"After Swapping : "<<endl;
    cout<<"n1 : "<<n1<<endl;
    cout<<"n2 : "<<n2<<endl;
}
