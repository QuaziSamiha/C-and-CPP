// Bitwise operator left shift and right shift
#include<stdio.h>

int main()
{
    // left shift
    int v1 = 60; // binary of 60 = 00111100 it will turn into 11110000 and decimal of it is 240
    printf("v1<<2 : %d \n", v1<<2); // multiply with 2 two times (60*2 = 120 and 120*2 = 240)

    // right shift
    int v2 = 60; // binary of 60 = 00111100 it will turn into 00001111 and decimal of it is 15
    printf("v2>>2 : %d \n", v2>>2); // divide by 2 two time(60/2 = 30 and 30/2 = 15)
}
