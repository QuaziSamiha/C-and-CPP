#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    int v1 = 2, v2 = 3, v3;
    v3 = v1++ * v2; // postfix increment : increments v1 by one after it is used
    cout<<" v1++ * v2 : "<< v3 <<endl;
    v3 = v1++ * v2; // postfix increment
    cout<<" v1++ * v2 : "<< v3 <<endl;

    int v4 = 2, v5 = 3, v6;
    v6 = ++v4 * v5; // prefix increment : increments v1 by one before it is used
    cout<<" ++v4 * v5 : "<< v6 <<endl;
}
