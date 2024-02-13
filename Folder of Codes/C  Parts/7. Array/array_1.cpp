// an array is a collection of variables of same data type
#include<iostream>

using namespace std;

int main()
{
    int array_1[4]; // declaring array

    // initializing array
    array_1[0] = 70;
    array_1[1] = 30;
    array_1[2] = 40;
    array_1[3] = 90;

    cout<<"array_1[2] : "<<array_1[2]<<endl;

    int variable = array_1[0]+array_1[1];
    // accessing array elements
    cout<<"array_1[0]+array_1[1] : "<<variable<<endl;

    int array_2[4] = {22,43,33,12};
    // declaring & initializing of array together
}
