// finding factorial using loop
#include<iostream>

using namespace std;

int main()
{
    int number, fact = 1;

    cout<<"Enter any positive integer : ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {
        fact *= i; // fact = fact * i ;
    }

    cout<<"factorial of "<<number<<" : "<<fact<<endl;
}
