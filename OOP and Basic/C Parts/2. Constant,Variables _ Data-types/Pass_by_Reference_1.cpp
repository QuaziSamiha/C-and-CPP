#include<iostream>  // (3:08pm,15 August,2020)

using namespace std;

void function_name(int&, int&);

int main()
{
    int v1 = 566, v2 = 277;

    cout << "v1 : " << v1 << endl;
    cout << "v2 : " << v2 << endl << endl;

    function_name(v1,v2);

    cout << "v1 : " << v1 << endl;
    cout << "v2 : " << v2 << endl;
    return 0;
}

void function_name(int &p1, int &p2)
{
    p1 = 455;
    p2 = 322;
}
