#include<stdio.h>
#include<iostream>

using namespace std;

main()
{
    int variable_1, variable_2, variable_3;

    cout<<"Enter two integers : ";
    scanf("%d %d", &variable_1, &variable_2); // cin >> variable_1 >> variable_2;

    variable_3 = variable_1 + variable_2;  // addition operator
    printf("Addition : %d \n", variable_3);

    int variable_4 =  variable_1 - variable_2; // subtraction operator
    cout<<"Subtraction : "<<variable_4<<endl;

    int variable_5 =  variable_1 * variable_2; // multiplication operator
    cout<<"Multiplication : "<<variable_5<<endl;

    int variable_6 =  variable_1 / variable_2; // division operator
    cout<<"Division : "<<variable_6<<endl;

    int variable_7 =  variable_1 % variable_2; // modulus operator
    cout<<"Modulus : "<<variable_7<<endl;
}
