#include <iostream>
// 7 sept, 24
using namespace std;

int main()
{
    int y;

    cout << "Enter a Year: ";
    cin >> y;

    if (y % 400 == 0)
    {
        cout << y << " is leap year" << endl;
    }
    else
    {
        if ((y % 4 == 0) && (y % 100 != 0))
        {
            cout << y << " is leap year" << endl;
        }
        else
        {
            cout << y << " is not leap year" << endl;
        }
    }
    return 0;
}
