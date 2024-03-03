#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 5; i <= j; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 
*/