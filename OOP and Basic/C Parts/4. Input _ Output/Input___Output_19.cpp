// formatting output using setw()
#include<iostream>
#include<iomanip> // for setw() function

using namespace std;

main()
{
    float variable_1, variable_2, variable_3;

    cout<<"Enter two integers : ";
    cin >> variable_1 >> variable_2;

    cout<<endl;

    variable_3 = variable_1 + variable_2;  // addition operator
    cout<<setw(17)<<"Addition : "<<variable_3<<endl;

    float variable_4 =  variable_1 - variable_2; // subtraction operator
    cout<<setw(17)<<"Subtraction : "<<variable_4<<endl;

    float variable_5 =  variable_1 * variable_2; // multiplication operator
    cout<<setw(17)<<"Multiplication : "<<variable_5<<endl;

    float variable_6 =  variable_1 / variable_2; // division operator
    cout<<setw(17)<<"Division : "<<variable_6<<endl;
}

