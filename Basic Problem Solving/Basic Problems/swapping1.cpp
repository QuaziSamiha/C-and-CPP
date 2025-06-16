#include <iostream>
// 04.03.24
// 07.09.24
using namespace std;

int main()
{
    int n1, n2, temp;
    n1 = 45;
    n2 = 99;
    cout << "Before Swapping: " << endl;
    cout << "n1 : " << n1 << endl;
    cout << "n2 : " << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "After Swapping: " << endl;
    cout << "n1 : " << n1 << endl;
    cout << "n2 : " << n2 << endl;
}