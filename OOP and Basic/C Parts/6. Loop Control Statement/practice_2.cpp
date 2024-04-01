// multiplication table
#include<iostream>

using namespace std;

int main()
{
    while(1)
    {
        int number;

        cout<<"Enter any positive integer for its multiplication table : ";
        cin>>number;

        for(int i = 1; i <= 10; i++)
        {
            int mul = number * i;
            cout<<number<<" x "<<i<<" = "<<mul<<endl;
            //  cout<<number<<" x "<<i<<" = "<< number*i <<endl;
        }
    }
}
