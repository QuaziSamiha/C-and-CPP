// syntax of logical operator
#include<iostream>
#include<stdio.h>

using namespace std;

main()
{
    int v1, v2, v3, v4;

    printf("Note : true = 1 and false = 0 \n");

    cout<<"Enter four integers : "<<endl;
    cout<<"v1 : ";
    cin>>v1;
    cout<<"v2 : ";
    cin>>v2;
    cout<<"v3 : ";
    cin>>v3;
    cout<<"v4 : ";
    cin>>v4;


    int v5 = v1 < v2;  // relational operator
    int v6 = v3 >= v4; // relational operator

    int v7 = v5 && v6; // logical AND (if each condition is true then it will be true)
    cout<<"AND operator (v1 < v2 && v3 >= v4) : "<<v7<<endl;

    int v8 = v5 || v6; // logical OR (if any condition or if each condition is true then it will be true)
    cout<<"OR operator (v1 < v2 || v3 >= v4) : "<<v8<<endl;

    int v9 = !(v1 > v2); // logical NOT
    cout<<"NOT operator ( !(v1 > v2) ) : "<<v9<<endl;
}
