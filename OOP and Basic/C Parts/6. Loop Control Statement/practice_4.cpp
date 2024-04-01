// finding prime number
#include<iostream>

using namespace std;

int main()
{
    while(1)
    {
        int number;

        cout<<"Enter any positive integer to find out that it is prime number or not : ";
        cin>>number;

        int flag = 0;
        for(int i = 2; i < number; i++)
        {
            if(number%i == 0)
            {
                flag++;
                break;
            }
        }

        if(flag == 0)
        {
            cout<<number<<" is a prime number"<<endl;
        }
        else
        {
            cout<<number<<" is not a prime number"<<endl;
        }
    }
}

// prime number is a positive number
