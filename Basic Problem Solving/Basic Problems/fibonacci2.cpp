#include <iostream>
// first nth fibonacci series
using namespace std;

int main()
{
    int n, first = 0, second = 1, febo, count = 0;
    cout << "Enter a positive integer : ";
    cin >> n;

    while (count < n)
    {
        if (count <= 1)
        {
            febo = count;
        }
        else
        {
            febo = first + second;
            first = second;
            second = febo;
        }
        cout << febo << '\t';
        count++;
    }
}