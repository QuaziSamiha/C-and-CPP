// Armstrong Number : number = sum of the cube of each digit of the number
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int number;

    cout<<"Enter any positive integer : ";
    cin>>number; // 153 = 1 to the power 3 + 5 to the power 3 + 3 to the power 3 = 1 + 125 + 27 = 153

    int temp, remainder, sum = 0;
    temp = number;

    while(temp != 0)
    {
        remainder = temp % 10;
        //sum = sum + pow(remainder,3);
        sum = sum + remainder*remainder*remainder;
        temp = temp / 10;
    }

    if(sum == number)
    {
        cout<<endl<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<endl<<"Not Armstrong Number"<<endl;
    }
}
