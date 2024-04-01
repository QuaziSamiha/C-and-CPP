// palindrome number : number = reverse number
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
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }

    cout<<endl<<"reverse number of integer "<<number<<" is : "<<sum<<endl;

    if(sum == number)
    {
        cout<<endl<<"palindrome number"<<endl;
    }
    else
    {
        cout<<endl<<"Not Palindrome"<<endl;
    }
}
