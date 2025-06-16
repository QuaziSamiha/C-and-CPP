#include <iostream> // (9:43 am, 15 August,2020)
using namespace std;

inline int function_name(int p1, int p2)
{
    return ((p1 > p2) ? p1 : p2);
}

int main()
{
    int v1, v2;

    cout << "Enter two integers : ";
    cin >> v1 >> v2;

    cout << endl
         << "maximum value : " << function_name(v1, v2) << endl;
    return 0;
}
