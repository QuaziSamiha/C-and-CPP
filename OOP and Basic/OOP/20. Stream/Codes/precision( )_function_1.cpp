#include<iostream>

using namespace std;

int main()
{
    float variable_1 = 51.123876;
    cout.precision(6); // it counts digits from before decimal point to after decimal point
    cout<<variable_1<<endl;

    float variable_4 = 51.1200;
    cout.precision(6); // it doesn't count zero
    cout<<variable_4<<endl;

    float variable_2 = 51.121376;
    cout.precision(6); // it counts digits from before decimal point to after decimal point
    cout<<variable_2<<endl;

    double variable_3 = 51.1213876; // if total digit is more than six( before & after decimal point), then we use double data type
    cout.precision(9);
    cout<<variable_3<<endl;

    float variable_5 = 51.123876;
    float variable_6 = 51.123876;
    cout.precision(4); // we don't need to use precision() function for every variable.once we use it, it will be fixed for every variables.
    cout<<variable_5<<endl;
    cout<<variable_6<<endl;

    return 0;
}
