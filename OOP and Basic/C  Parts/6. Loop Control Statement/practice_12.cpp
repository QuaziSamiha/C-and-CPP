// Strong Number : number = number = sum of the factorial of each digit of the number
#include<iostream>

using namespace std;

int main()
{
    int number;

    cout<<"Enter any positive integer : ";
    cin>>number;  // 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145 is a strong number

    int temp, remainder, sum = 0, fact;
    temp = number;

    while(temp != 0)
    {
        remainder = temp % 10;
        fact = 1;
        for(int i = 1; i <= remainder; i++)
        {
            fact *= i; // fact = fact * i ;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum == number)
    {
        cout<<endl<<"strong number"<<endl;
    }
    else
    {
        cout<<endl<<"Not strong number"<<endl;
    }
}
