#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
*/