#include<iostream>
#define two 3 // it is useful when a large number has to use many times
#define symbolic_constant 89473752983384 // large number. so instead of this large value we can use symbolic_constant
#define sc 37465783487248374 // instead of this large value we can use sc

using namespace std;

int main()
{
    int v1, v2, v3, v4;

    v1 = 1;
    v3 = 4;

    v2 = two + v1; // 1+3
    v4 = two + v3; // 3+4

    cout<<"v2 : "<<v2<<endl;
    cout<<"v4 : "<<v4<<endl;
}
