#include <iostream>

using namespace std;

// pointer to pointer

int main()
{
    int variable_1 = 132;
    int *variable_2;
    int **variable_3; // it can hold address of *variable_2
                      //  int  ***variable_4; // it can hold address of **variable_3
                      // holding address of a pointer in another pointer

    variable_2 = &variable_1;
    variable_3 = &variable_2;

    cout << "Value of variable_1                            : " << variable_1 << endl;
    cout << "Value of variable_1 using pointer *variable_2  : " << *variable_2 << endl;
    cout << "Value of variable_1 using pointer **variable_3 : " << **variable_3 << endl
         << endl;
    /*
    Value of variable_1                            : 132
    Value of variable_1 using pointer *variable_2  : 132
    Value of variable_1 using pointer **variable_3 : 132
    */

    cout << "Address of variable_1 (&variable_1)                            : " << &variable_1 << endl;
    cout << "Address of variable_1 using pointer *variable_2 (variable_2)   : " << variable_2 << endl;
    cout << "Address of variable_1 using pointer **variable_3 (*variable_3) : " << *variable_3 << endl
         << endl;

    /*
    Address of variable_1 (&variable_1)                            : 0x7fff10cd3c94
    Address of variable_1 using pointer *variable_2 (variable_2)   : 0x7fff10cd3c94
    Address of variable_1 using pointer **variable_3 (*variable_3) : 0x7fff10cd3c94
    */
    cout << "Address of pointer *variable_2 ( &variable_2 )                             : " << &variable_2 << endl;
    cout << "Address of pointer *variable_2 using pointer **variable_3 ( variable_3 )   : " << variable_3 << endl
         << endl;

    /*
Address of pointer *variable_2 ( &variable_2 )                             : 0x7fff10cd3c98
Address of pointer *variable_2 using pointer **variable_3 ( variable_3 )   : 0x7fff10cd3c98
*/

    cout << "Address of pointer **variable_3 using pointer **variable_3 ( &variable_3 ) : " << &variable_3 << endl
         << endl;

    // Address of pointer **variable_3 using pointer **variable_3 ( &variable_3 ) : 0x7fff10cd3ca0

    return 0;
}
