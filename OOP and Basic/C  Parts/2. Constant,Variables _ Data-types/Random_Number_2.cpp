// generating random number
#include<iostream>
#include<stdlib.h> // for rand() function

using namespace std;

int main()
{
    for(int i = 1; i <= 6; i++)
    {
        int local_variable = rand();

        cout<<endl<<"Random Number : "<<local_variable<<endl;
    }
}

