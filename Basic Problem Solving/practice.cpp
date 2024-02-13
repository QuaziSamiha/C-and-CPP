// 371 order of this number is 3, and it is a armstrong number because 3 * 3 * 3 + 7 * 7 * 7 + 1 * 1 * 1 = 371;
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, q, temp, r;
    cout << "Armstrong Number from 1 to 500" << endl;
    
    for (int i = 1; i <= 500; i++)
    {
        q = 1;

        while (q != 0)
        {
            r = q % 10;
            sum = sum + r * r * r;
            q = q / 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
}