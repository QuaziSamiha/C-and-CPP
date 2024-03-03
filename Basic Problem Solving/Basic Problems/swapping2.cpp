#include <iostream>
// swapping without temporary variable
using namespace std;

int main()
{
    int n1, n2, temp;
    n1 = 15;
    n2 = 10;
    cout << "Before Swapping: " << endl;
    cout << "n1 : " << n1 << endl;
    cout << "n2 : " << n2 << endl;

    n1 = n1 + n2; // 15 + 10 = 25 = n1
    n2 = n1 - n2; // 25-10 = 15 = n2
    n1 = n1 - n2; // 25-15 = 10 = n1
    
    cout << "After Swapping: " << endl;
    cout << "n1 : " << n1 << endl;
    cout << "n2 : " << n2 << endl;
}