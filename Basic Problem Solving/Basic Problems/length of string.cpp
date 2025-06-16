#include <iostream>
//
using namespace std;

int main()
{
    char str[100] = "Samiha Tasnim";

    int i = 0, length = 0;
    while (str[i] != '\0') // till null character
    {
        i++;
        length++;
    }
    cout << "Length of String: " << length << endl;
}