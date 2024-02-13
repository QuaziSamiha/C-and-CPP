// to know why we use if-else statement
#include<iostream>

using namespace std;

int main()
{
    int v1, v2;

    cout<<"Enter two integers : ";
    cin>>v1>>v2;

    if(v1 > v2)
    {
        cout<<"Large number : "<<v1<<endl;
    }
    if(v1 < v2)
    {
        cout<<"Large number : "<<v2<<endl;
    }
    else // this statement will execute when above if statement is not true and it will occur an error in output
    {
        cout<<"Numbers are equal"<<endl;
    }
}

/*

input :
Enter two integers : 30 56
output :
Large number : 56
Numbers are equal (a new problem arises here because when second if condition is not true the else statement executes)
so avoid this problem we need else-if statement
solve of this problem we can see in else_if_statement_4.cpp file
----------------------------------------------------------------------------------------------------------------------------
input :
Enter two integers : 35 16
output :
Large number : 35
-------------------------------------------------
input :
Enter two integers : 10 10
output :
Numbers are equal

*/
