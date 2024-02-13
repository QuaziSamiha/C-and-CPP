// difference between while and do-while loop
#include<iostream>

using namespace std;

int main()
{
    int i = 11; // initialization
    do
    {
        cout<<"do-while loop -> "<<i<<endl;
        i++; // update
    }
    while(i <= 10); // condition


    int j = 11; // initialization
    while(j <= 10) // condition
    {
        cout<<"while loop -> "<<i<<endl;
        j++; // update
    }
}
