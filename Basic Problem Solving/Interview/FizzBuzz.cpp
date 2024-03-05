// 05.03.24
// 04.03.24 ------- Therap ---- associative software engineer
#include <iostream>

using namespace std;

void fizzBuzz(int n);

int main()
{
    int n = 30;
    fizzBuzz(n);
    return 0;
}

void fizzBuzz(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 5 == 0)
        {
            cout << "Fizz" << endl;
        }
        else if (i % 3 == 0)
        {
            cout << "Buzz" << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}