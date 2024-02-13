// generating random number within a range
#include<iostream>
#include<stdlib.h> // for rand() function

using namespace std;

int main()
{
    for(int i = 1; i <= 6; i++)
    {
        int local_variable = rand()%5 + 1; // remainder will be from 1 to 5

        cout<<endl<<"Random Number : "<<local_variable<<endl;
    }
}

