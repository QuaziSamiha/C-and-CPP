// NUM_1 = 60 = 2 x 2 x 3 x 5
// NUM_2 = 24 = 2 x 2 x 3 x 2 x 5
// GCD = greatest common divisor = 2 x 2 x 3 x 5 = 12
// LCD = lowest common divisor = 2 x 2 x 3 x 2 x 5 = 120
// LCD = (NUM_1 * NUM_2) / GCD = (60 * 24) / 12 = 120

#include <iostream>

using namespace std;

int main()
{
    int n1 = 60, n2 = 24, v1, v2;

    int remainder, GCD, LCD;
    v1 = n1;
    v2 = n2;

    while (v2 != 0)
    {
        remainder = v1 % v2;
        v1 = v2;
        v2 = remainder;
    }
    GCD = v1;
    LCD = (n1 * n2) / GCD;

    cout << "gcd: " << GCD << endl;
    cout << "lcd: " << LCD << endl;
}