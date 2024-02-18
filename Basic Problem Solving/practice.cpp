#include <iostream>

using namespace std;

void LeapYear(int, int);

int main()
{
    int startYear, endYear;

    cout << "Enter a Start Year: ";
    cin >> startYear;
    cout << "Enter a End Year: ";
    cin >> endYear;

    LeapYear(startYear, endYear);
    return 0;
}

void LeapYear(int startYear, int endYear)
{
    if (startYear < endYear)
    {
        for (int i = endYear; i >= startYear; i--)
        {
            if (i % 400 == 0)
            {
                cout << i << " is leap year" << endl;
            }
            else
            {
                if ((i % 4 == 0) && (i % 100 != 0))
                {
                    cout << i << " is leap year" << endl;
                }
                else
                {
                    cout << i << " is not leap year" << endl;
                }
            }
        }
    }
}
