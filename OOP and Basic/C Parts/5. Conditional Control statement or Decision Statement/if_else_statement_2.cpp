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
}

/*

input :
Enter two integers : 30 56
output :
Large number : 56
-------------------------------------------------
input :
Enter two integers : 35 16
output :
Large number : 35
-------------------------------------------------
input :
Enter two integers : 10 10
output :
program terminate(no output)
so an else statement is necessary for equal numbers

*/
