// guessing game
// generating random number within a range
#include<iostream>
#include<stdlib.h> // for rand() function

using namespace std;

int main()
{
    while(1)
    {
        int variable_1, variable_2;
        cout<<"Enter your guess between 1 to 5 : ";
        cin>>variable_1;

        variable_2 = rand()%5 + 1; // remainder will be from 1 to 5

        if(variable_1 == variable_2)
        {
            cout<<"You win the game"<<endl<<endl;
        }
        else
        {
            cout<<"You lost the game"<<endl;
        }
    }
}

