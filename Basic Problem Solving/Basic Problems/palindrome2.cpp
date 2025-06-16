#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter a String: ";
    cin >> str1;

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

    int d = strcmp(str1, str2);
    if (d == 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}