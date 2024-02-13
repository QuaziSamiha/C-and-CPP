// use of relational operator and understanding why we use else if statement
#include<iostream>

using namespace std;

int main()
{
    float n;

    cout<<"Enter any number : ";
    cin>>n;

    // all the conditions will be checked and since here we only use if statement so we can see a problem
    if(n >= 80)
    {
        cout<<"A+"<<endl;
    }
    if(n >= 70)
    {
        cout<<"A"<<endl;
    }
    if(n >= 60)
    {
        cout<<"A-"<<endl;
    }
    if(n >= 50)
    {
        cout<<"B"<<endl;
    }
    if(n >= 40)
    {
        cout<<"C"<<endl;
    }
    if(n >= 33)
    {
        cout<<"D"<<endl;
    }
    if(n < 33)
    {
        cout<<"F"<<endl;
    }
}
/*
input :
Enter any number : 82
output :
A+
A
A-
B
C
D
------------------------------------------------------------
input :
Enter any number : 77
output :
A
A-
B
C
D
------------------------------------------------------------
input :
Enter any number : 55
output :
B
C
D
------------------------------------------------------------
input :
Enter any number : 30
output : F (only this output is correct)

So for avoiding this problem we have to use else-if statement
*/
