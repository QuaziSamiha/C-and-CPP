// 371 order of this number is 3, and it is a armstrong number because 3 * 3 * 3 + 7 * 7 * 7 + 1 * 1 * 1 = 371;
#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, q, temp, r;

    cout << "Enter a number: ";
    cin >> n;

    q = n;

    while (q != 0)
    {
        r = q % 10;
        sum = sum + r * r * r;
        q = q / 10;
    }
    if (sum == n)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }
}