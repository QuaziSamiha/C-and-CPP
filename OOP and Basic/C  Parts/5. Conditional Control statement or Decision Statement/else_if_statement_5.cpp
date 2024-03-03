// to know why we use else-if statement
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
    else if(v1 < v2) // this condition will be checked only when above if condition is not true
    {
        cout<<"Large number : "<<v2<<endl;
    }
    else // this statement will execute only when if and else-if condition is not true
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
solve of this problem we can see in using else-if statement
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

