// finding GCD(Greatest Common Divisor) and LCM(Least Common Multiple) using loop
#include<iostream>

using namespace std;

int main()
{
    int number_1, number_2;

    cout<<"Enter two positive integer for finding GCD and LCM : ";
    cin>>number_1>>number_2;

    int remainder, n1, n2;
    n1 = number_1;
    n2 = number_2;

    while(number_2 != 0)
    {
        remainder = number_1 % number_2;
        number_1 = number_2;
        number_2 = remainder;
    }

    int GCD = number_1;
    int LCM = ((n1*n2)/GCD);

    cout<<"GCD : "<<GCD<<endl<<"LCM : "<<LCM<<endl;
}
