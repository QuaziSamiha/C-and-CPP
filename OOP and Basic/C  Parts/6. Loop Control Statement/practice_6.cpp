// finding sum of digits of a positive integer
#include<iostream>

using namespace std;

int main()
{
    int number;

    cout<<"Enter any positive integer : ";
    cin>>number;

    int temp, remainder, sum = 0;
    temp = number;

    while(temp != 0)
    {
        remainder = temp % 10;
        sum = sum + remainder;
        temp = temp / 10;
    }
    cout<<endl<<"sum of digits of integer "<<number<<" : "<<sum<<endl;
}
