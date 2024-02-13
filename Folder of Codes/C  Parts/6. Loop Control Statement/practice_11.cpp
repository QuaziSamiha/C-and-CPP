// counting number of digit in an integer
#include<iostream>

using namespace std;

int main()
{
    int number, c = 0;

    cout<<"Enter any integer : ";
    cin>>number;

    cout<<"number of digit in integer "<<number<<" is : ";
    while(number != 0)
    {
        number = number / 10;
        c++;
    }
    cout<<c<<endl;
}
