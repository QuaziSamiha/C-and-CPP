// finding Armstrong numbers in range such as from 1 to 1000
#include<iostream>

using namespace std;

int main()
{
    int n1, n2;

    // 153 = 1 to the power 3 + 5 to the power 3 + 3 to the power 3 = 1 + 125 + 27 = 153
    cout<<"Enter two positive integer for a range finding of Armstrong number : ";
    cin>>n1>>n2;

    int temp, remainder, sum = 0;

     cout<<"Armstrong number from "<<n1<<" to "<<n2<<" : "<<endl;

    for(int i = n1; i <= n2; i++)
    {
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            remainder = temp % 10;
            sum = sum + remainder*remainder*remainder;
            temp = temp / 10;
        }

        if(sum == i)
        {
            cout<<sum<<endl;
        }
    }
}


