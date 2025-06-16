#include <iostream>
using namespace std;

int main()
{
    int count;

    for (int i = 1; i < 20; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "Prime Number : " << i << endl;
        }
        else
        {
            cout << "Not Prime Number : " << i << endl;
        }
    }
}