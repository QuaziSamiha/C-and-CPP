// Bitwise AND operator ( & )
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int v1 = 60; // binary of 60 = 00111100
    int v2 = 17; // binary of 17 = 00010001

    printf("Result of Bitwise AND(&) Operation : %d \n", (v1 & v2));

    int v3 = v1 & v2; // this sign is called ampersand
    cout<<"Result of Bitwise AND(&) Operation : "<<v3<<endl;
}
/*
Rules : ( 0 & 0 = 0, 0 & 1 = 0, 1 & 0 = 0, 1 & 1 = 1 )

00111100
00010001
---------
00010000  after checking bitwise

decimal of 00010000 = 16
*/
