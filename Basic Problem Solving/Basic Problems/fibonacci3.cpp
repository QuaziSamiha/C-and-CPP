#include <iostream>
// 29.02.24
// orchard silicon limited interview question
using namespace std;
// print fibonacci number till 13
int main()
{
    int n = 13, first = 0, second = 1, febo = 0;

    while (febo <= 13)
    {
        cout << febo << "\t";
        febo = first + second;
        first = second;
        second = febo;
    }
    return 0;
}
//