#include<stdio.h>  // the outcomes of this operation is a boolean value
#include<iostream> // relational operator compares two items

using namespace std;

main()
{
    int v1, v2, v3;

    printf("Note : true = 1 and false = 0 \n");

    cout<<"Enter two integers : ";
    cin>>v1>>v2;

    v3 = (v1 < v2);
    cout<<"Result (less than) : "<<v3<<endl;

    int v5 = (v1 <= v2);
    cout<<"Result (less then or equal to ) : "<<v5<<endl;

    int v8 = (v1 > v2);
    cout<<"Result (greater than) : "<<v8<<endl;

    int v4 = (v1 >= v2);
    cout<<"Result (greater then or equal to ) : "<<v4<<endl;

    int v6 = (v1 == v2);
    cout<<"Result (equal to ) : "<<v6<<endl;

    int v7 = (v1 != v2);
    cout<<"Result (not equal to ) : "<<v7<<endl;
}
