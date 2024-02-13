#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    int v1 = 2, v2 = 3, v3;
    v3 = v1-- * v2; // postfix decrement :
    cout<<" v1-- * v2 : "<< v3 <<endl;
    v3 = v1-- * v2; // postfix decrement
    cout<<" v1-- * v2 : "<< v3 <<endl;

    int v4 = 2, v5 = 3, v6;
    v6 = --v4 * v5; // prefix decrement
    cout<<" --v4 * v5 : "<< v6 <<endl; // prefix decrement
}

