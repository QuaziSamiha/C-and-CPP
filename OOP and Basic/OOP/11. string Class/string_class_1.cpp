#include<iostream>
#include<string>

using namespace std;

int main()
{
    string v1 = "C++";
    string v2 = " Programming", v3;

    v3 = v1;
    cout << "v3 : " << v3 << endl;

    v3 = v1 + v2;
    cout << "v3 : " << v3 << endl;

    int l = v3.size();
    cout << "length of v3 : " << l << endl;
}
