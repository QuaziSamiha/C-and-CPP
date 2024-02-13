#include <iostream>

using namespace std;

int main()
{
    int number, result, quotient, remainder;

    cout << "Enter an integer: " << endl;
    cin >> number;

    result = 0;
    quotient = number;
    
    while (quotient != 0)
    {
        remainder = quotient % 10;
        result = result * 10 + remainder;
        quotient = quotient / 10;
    }

    if (number == result)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}