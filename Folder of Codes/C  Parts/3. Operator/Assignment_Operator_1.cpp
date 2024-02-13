#include<iostream> // also called C shorthand

using namespace std;

main()
{
    int v1 = 12; // assignment statement
    v1 = v1 + 10; // assignment statement
    cout<<"v1 : "<< v1 <<endl;

    int v2 = 12;
    cout<<"v2 : "<< v2 <<endl;

    v2 += 10; // using assignment operator or C shorthand
    cout<<"v2 += 10 : "<< v2 <<endl;

    v2 = 12;
    v2 -= 10; // using assignment operator or C shorthand
    cout<<"v2 -= 10 : "<< v2 <<endl;

    v2 = 12;
    v2 *= 10; // using assignment operator or C shorthand
    cout<<"v2 *= 10 : "<< v2 <<endl;

    v2 = 12;
    v2 /= 10; // using assignment operator or C shorthand
    cout<<"v2 /= 10 : "<< v2 <<endl;

    v2 = 12;
    v2 %= 10; // using assignment operator or C shorthand
    cout<<"v2 %= 10 : "<< v2 <<endl;

    v2 = 12;
    v2 += v1; // v2 = v2 + v1;
    cout<<"v2 += v1 : "<<v2<<endl;
}
