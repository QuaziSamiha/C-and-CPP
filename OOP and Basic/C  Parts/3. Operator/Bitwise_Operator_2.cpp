// Bitwise OR operator ( | )
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int v1 = 60; // binary of 60 = 00111100
    int v2 = 17; // binary of 17 = 00010001

    printf("Result of Bitwise OR(|) Operation : %d \n", (v1 | v2));

    int v3 = v1 | v2; // this sign is called vertical bar
    cout<<"Result of Bitwise OR(|) Operation : "<<v3<<endl;
}
/*
Rules :  ( 0 | 0 = 0, 0 | 1 = 1, 1 | 0 = 1, 1 | 1 = 1 )

00111100
00010001
---------
00111101  after checking bitwise

decimal of 00010000 = 61
*/
