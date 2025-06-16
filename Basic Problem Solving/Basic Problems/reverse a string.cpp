#include <iostream>
using namespace std;

int main()
{
    char str1[100] = "Samiha Tasnim";
    char str2[100];

    int i = 0, length = 0, j;
    while (str1[i] != '\0')
    {
        i++;
        length++;
    }

    for (j = 0, i = length - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }

    str2[j];
    cout << "string: " << str1 << endl;
    cout << "reverse String: " << str2 << endl;
}